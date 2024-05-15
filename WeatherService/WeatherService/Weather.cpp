#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) :
	city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds)
{
}

void Weather::WeatherOut()
{
	cout << "Weather:"
		<< "\n\tCity: " << city
		<< "\n\tLon: " << lon
		<< "\n\tLat: " << lat
		<< "\n\tTemperature: " << temperature
		<< "\n\tWeather: " << weather
		<< "\n\tWind Speed: " << windSpeed
		<< "\n\tClouds: " << clouds
		<< endl;
}
