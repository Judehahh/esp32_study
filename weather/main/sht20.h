#ifndef SHT20_H
#define SHT20_H

#define SHT20_I2C_NUM  (0)
#define SHT20_SCL_NUM (GPIO_NUM_5)
#define SHT20_SDA_NUM (GPIO_NUM_4)

#define DEV_SHT20_SCL_NUM               SHT20_SCL_NUM               /*!< gpio number for I2C master clock */
#define DEV_SHT20_SDA_NUM               SHT20_SDA_NUM               /*!< gpio number for I2C master data  */
#define DEV_SHT20_I2C_NUM               SHT20_I2C_NUM               /*!< I2C port number for master dev */
#define I2C_MASTER_FREQ_HZ              (100000)                    /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE 0                                 /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE 0                                 /*!< I2C master doesn't need buffer */

#define WRITE_BIT 0 /*!< I2C master write */
#define READ_BIT 1   /*!< I2C master read */

#define ACK_CHECK_EN 0x1           /*!< I2C master will check ack from slave*/
#define ACK_CHECK_DIS 0x0          /*!< I2C master will not check ack from slave */
#define ACK_VAL 0x0                /*!< I2C ack value */
#define NACK_VAL 0x1               /*!< I2C nack value */

#define ESP_SLAVE_ADDR 0x40
#define HOLD_AT_START 0xe3    //触发温度测量
#define HOLD_AH_START 0xe5    //触发湿度测量
#define REST 0xfe             //软件复位
/*
 * 初始化
 */
void init_sht20(void);

/*
 * 获取温度
 */
float get_sht20_Temperature(void);

/*
 * 获取湿度
 */
float get_sht20_Humidity(void);

#endif