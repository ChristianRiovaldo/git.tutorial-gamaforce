#include <iostream>
#include <cmath>
using namespace std;

const double radius_bumi = 6371000;

int main() {
    double lat1, lon1, alt1, lat2, lon2, alt2;

    cout << "Masukkan koordinat titik pertama (lat lon alt): "; cin >> lat1 >> lon1 >> alt1;
    cout << "Masukkan koordinat titik kedua (lat lon alt): "; cin >> lat2 >> lon2 >> alt2;

    double dLat = (lat2 - lat1) * M_PI / 180;
    double dLon = (lon2 - lon1) * M_PI / 180;
    lat1 = lat1 * M_PI / 180;
    lat2 = lat2 * M_PI / 180;

    double a = sin(dLat/2) * sin(dLat/2) + cos(lat1) * cos(lat2) * sin(dLon/2) * sin(dLon/2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));

    double jarak_permukaan = radius_bumi * c;
    double perbedaan_ketinggian = abs(alt2 - alt1);
    double jarak_total = sqrt(pow(jarak_permukaan, 2) + pow(perbedaan_ketinggian, 2));

    cout << "Jarak antara kedua titik: " << jarak_total << " meter" << endl;

return 0;
}