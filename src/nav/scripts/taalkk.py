import os
import speech_recognition as sr
from openai import OpenAI

# 設置你的 OpenAI API 金鑰
client = OpenAI(api_key="")

# 創建一個語音識別器
recognizer = sr.Recognizer()

# 使用麥克風作為音源
with sr.Microphone() as source:
    print("請說話...")
    recognizer.adjust_for_ambient_noise(source)
    audio = recognizer.listen(source)

    try:
        # 使用 Google Speech-to-Text 進行轉換
        text = recognizer.recognize_google(audio, language="zh-TW")
        print(f"你剛剛說了: {text}")

        # 使用 OpenAI Chat API 傳送語音轉文字的結果
        completion = client.chat.completions.create(
            model="gpt-4o",
            messages=[
                {"role": "system", "content": "You are a helpful assistant."},
                {"role": "user", "content": text}
            ]
            )
        print(completion.choices[0].message)

    except sr.UnknownValueError:
        print("抱歉，我無法理解你說的內容。")
    except sr.RequestError as e:
        print(f"無法連接到 Google 服務: {e}")
    except Exception as e:
        print(f"處理 OpenAI 回應時發生錯誤: {e}")
