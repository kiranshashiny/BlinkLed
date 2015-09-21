all: blinkled 

blinkled: blinkled.c
	$(CC) blinkled.c -I ./../ -I ./lib ./iotfclient.c ./lib/MQTTClient.c ./lib/MQTTLinux.c ./lib/MQTTFormat.c  ./lib/MQTTPacket.c ./lib/MQTTDeserializePublish.c ./lib/MQTTConnectClient.c ./lib/MQTTSubscribeClient.c ./lib/MQTTSerializePublish.c ./lib/MQTTConnectServer.c ./lib/MQTTSubscribeServer.c ./lib/MQTTUnsubscribeServer.c ./lib/MQTTUnsubscribeClient.c -L/usr/local/lib -lwiringPi -o $@
	strip $@
clean:
	rm -f blinkled
