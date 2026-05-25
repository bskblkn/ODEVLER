# Kurulum ve Kullanım

## 1. n8n Workflow Import

`workflow/n8n-workflow.json` dosyasını n8n içine import edin. Import sonrasında credential alanlarını yeniden bağlayın.

## 2. Gerekli Credentiallar

- Google Drive OAuth2
- Airtable Personal Access Token
- SMTP/Gmail App Password
- Groq API Key
- OpenRouter API Key

## 3. Fillout Entegrasyonu

Workflow publish edildikten sonra n8n Webhook Production URL değeri Fillout webhook entegrasyonuna eklenir.

## 4. Çalışma Akışı

1. Kullanıcı Fillout formunu gönderir.
2. n8n form verilerini normalize eder.
3. Ses varsa Groq Whisper transkript üretir.
4. OpenRouter hata analizi üretir.
5. Airtable üzerinde kayıt oluşturulur.
6. Dosya varsa Google Drive'a yüklenir.
7. Gmail/SMTP ile bildirim gönderilir.

## 5. Test Senaryoları

- Dosyalı ve sesli hata raporu
- Dosyasız fakat sesli hata raporu
- Dosyasız ve sessiz hata raporu
- Dosyalı fakat sessiz hata raporu
