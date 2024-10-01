#!/usr/bin/env python3
import os
import io
import pyaudio
import wave
from google.cloud import speech

# 初始化 Google Speech-to-Text 客戶端
speech_client = speech.SpeechClient()

# 錄製音頻的參數
RATE = 16000
CHUNK = 1024

def record_audio():
    """錄製音頻，並返回音頻文件路徑"""
    p = pyaudio.PyAudio()
    stream = p.open(format=pyaudio.paInt16, channels=1, rate=RATE, input=True, frames_per_buffer=CHUNK)
    
    print("請開始說話...")
    frames = []
    
    try:
        while True:
            data = stream.read(CHUNK)
            frames.append(data)
    except KeyboardInterrupt:
        print("錄音結束")
    
    stream.stop_stream()
    stream.close()
    p.terminate()

    # 將音頻數據保存到文件
    audio_file = "test_audio.wav"
    wf = wave.open(audio_file, 'wb')
    wf.setnchannels(1)
    wf.setsampwidth(p.get_sample_size(pyaudio.paInt16))
    wf.setframerate(RATE)
    wf.writeframes(b''.join(frames))
    wf.close()

    return audio_file

def transcribe_audio(audio_file):
    """將音頻轉換為文字"""
    with io.open(audio_file, "rb") as audio:
        content = audio.read()

    audio_recognition = speech.RecognitionAudio(content=content)
    config = speech.RecognitionConfig(
        encoding=speech.RecognitionConfig.AudioEncoding.LINEAR16,
        sample_rate_hertz=16000,
        language_code="zh-TW",  # 這裡使用繁體中文，根據需要可更改語言代碼
    )

    response = speech_client.recognize(config=config, audio=audio_recognition)

    for result in response.results:
        print("你說的是：{}".format(result.alternatives[0].transcript))

if __name__ == "__main__":
    # 1. 錄音
    audio_file = record_audio()

    # 2. 將音頻轉換為文字
    transcribe_audio(audio_file)
