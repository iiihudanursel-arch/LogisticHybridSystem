# Lojistik Yönetim Sistemi (Hibrit Graf ve Hash Tablosu)

Bu proje, bir lojistik firmasının şehirler arası bağlantılarını **Graf (Graph)** yapısı ile yönetirken, paket bilgilerini hızlı sorgulama amacıyla **Hash Tablosu (Hash Table)** yapısı ile entegre eden hibrit bir sistemdir.

## 👤 Öğrenci Bilgileri
*   **Ad Soyad:** Hüdanur Sel
*   **Öğrenci Numarası:** 1250505012

## 🛠️ Teknik Özellikler
Öğrenci numaramın son hanelerine dayalı olarak sistemde aşağıdaki teknikler uygulanmıştır:

*   **Hash Fonksiyonu:** Tip A (Modulo Aritmetiği) [Numara Sonu: 2 (Çift)]
*   **Çakışma (Collision) Yönetimi:** Açık Adresleme - Linear Probing [Numara Sonu: 2 (0-4 Arası)]
*   **Graf Gezinme Algoritması:** DFS (Depth First Search) [Sondan 2. Rakam: 1 (Tek)]

## 📂 Proje Yapısı
Proje, mantıksal katmanlarına göre ayrılmış çoklu dosya yapısında (Modular C) geliştirilmiştir:
*   `main.c`: Sistemin ana giriş noktası, menü yönetimi ve test senaryoları.
*   `common.h`: `Package` ve `City` yapılarını içeren global başlık dosyası.
*   `package_hash.c / .h`: Paketlerin Tip A hash fonksiyonu ve açık adresleme ile yönetildiği katman.
*   `city_graph.c / .h`: Şehir bağlantılarının yönetildiği ve DFS algoritmasının uygulandığı katman.

## 🚀 Çalıştırma Talimatları
Projeyi Dev-C++ veya herhangi bir GCC tabanlı derleyici ile çalıştırmak için:
1.  Tüm `.c` ve `.h` dosyalarını aynı proje klasörüne dahil edin.
2.  Dev-C++ kullanıyorsanız yeni bir "C Project" oluşturun ve dosyaları projeye ekleyin.
3.  `main.c` dosyasını derleyip çalıştırın.

## 📊 Bellek İzleme Raporu
Sistem, çalışma anında dinamik olarak oluşturulan yapıların bellek adreslerini (`0x...`) raporlamaktadır. Bu verilerle hazırlanan teknik tablo ve pointer bağlantı şeması, ödev teslimindeki **Bellek İzleme Raporu** dosyasında detaylandırılmıştır.

## 📺 Sunum ve Video
*   **Video Süresi:** +10 Dakika
*   **İçerik:** Kod analizi, teknik tercihlerin gerekçeleri ve çalışan sistem demosu.
