# Bug Report → Çözüm Önerisi AI

Bu proje, kullanıcıların hata raporlarını form üzerinden iletmesini, sistemin bu raporları yapay zekâ desteğiyle analiz etmesini ve sonuçları Airtable, Google Drive ve e-posta kanallarına aktarmasını sağlayan bir otomasyon sistemidir.

## Proje Özeti

Sistem Fillout formundan gelen hata raporlarını n8n workflow üzerinden işler. Ses dosyası varsa Groq Whisper ile transkript çıkarılır. OpenRouter üzerinden hata özeti, kategori, öncelik ve çözüm önerisi oluşturulur. Sonuçlar Airtable tablosuna kaydedilir. Ek dosya varsa Google Drive klasörüne yüklenir. Süreç sonunda Gmail/SMTP ile bildirim gönderilir.

## Klasör Yapısı

```text
reports/   Türkçe ve İngilizce proje raporları
workflow/  Temizlenmiş n8n workflow JSON dosyası
assets/    Proje ekran görüntüleri
docs/      Kurulum ve proje açıklaması
```

## Kullanılan Araçlar

- Fillout
- n8n
- OpenRouter
- Groq Whisper
- Airtable
- Google Drive
- Gmail/SMTP

## Güvenlik Notu

`workflow/n8n-workflow.json` dosyası GitHub için temizlenmiştir. Gerçek API key, SMTP şifresi ve token bilgileri paylaşılmamıştır. Workflow import edildikten sonra credential alanları n8n üzerinde yeniden tanımlanmalıdır.

## Raporlar

- `reports/Bug_Report_Çözüm_Önerisi_AI_BaşakBalkan_244410022_TR.pdf`
- `reports/Bug_Report_Çözüm_Önerisi_AI_BaşakBalkan_244410022_EN.pdf`
