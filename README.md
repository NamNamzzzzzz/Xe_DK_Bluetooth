# Xe Tank Điều Khiển Bluetooth

## Giới thiệu
Dự án này được thực hiện với mục tiêu:
- **Tìm hiểu giao thức giao tiếp HC-06** qua Bluetooth.
- **Ứng dụng thực tế** bằng việc điều khiển mô hình xe tank thông qua Arduino Uno.

Dự án này đã tham gia **Hội thi Khoa học Kỹ thuật Công Nghệ 2024** và đạt giải **"Ấn Tượng"** nhờ tính sáng tạo và hiệu quả trong hoạt động.

---

## Công nghệ và phần cứng sử dụng
- **Bluetooth HC-06**: Kết nối không dây với thiết bị di động.
- **Arduino Uno (ATmega328P)**: Bộ xử lý chính cho dự án.
- **L298N Motor Driver**: Điều khiển động cơ DC.
- **Động cơ DC**: Động cơ chính để di chuyển xe.
- **Nguồn điện**: Pin sạc 12V hoặc nguồn tương tự để cấp điện cho L298N và động cơ.

---

## Tính năng
### Tính năng chính:
- Điều khiển xe tank qua Bluetooth với các thao tác cơ bản:
  - **Chạy tới**
  - **Chạy lùi**
  - **Quay trái**
  - **Quay phải**

### Tính năng phụ (chưa triển khai):
- **Đèn nháy**: Báo hiệu trạng thái của xe (do mô hình hiện tại chưa hỗ trợ).

---

## Hướng dẫn đấu dây
### Kết nối HC-06 với Arduino Uno:
- **VCC** → 5V trên Arduino.
- **GND** → GND trên Arduino.
- **TX** → Chân số 3 trên Arduino (RX SoftwareSerial).
- **RX** → Chân số 2 trên Arduino (TX SoftwareSerial).

### Kết nối L298N với Arduino Uno:
- **ENA (Enable A)** → Chân số 4 trên Arduino.
- **IN1** → Chân số 5 trên Arduino.
- **IN2** → Chân số 6 trên Arduino.
- **IN3** → Chân số 7 trên Arduino.
- **IN4** → Chân số 8 trên Arduino.
- **ENB (Enable B)** → Chân số 9 trên Arduino.

### Kết nối L298N với động cơ và nguồn:
- **Motor A** → Kết nối với ngõ ra A của L298N.
- **Motor B** → Kết nối với ngõ ra B của L298N.
- **VCC** → Pin 12V hoặc nguồn tương thích cho động cơ.
- **GND** → GND chung với Arduino.

---

## Hình ảnh mô hình xe tank
Dưới đây là hình ảnh mô hình xe tank được sử dụng trong dự án:

![Mô hình xe tank](images/tank_model.png)
