#include <stdio.h>
#include <math.h>
    //CREATING EXTRA FREQUENCY VAR
    //INDUCTANCE IN HENRY
    //MIGHT BE AN ERROR IN THE QUESTION

    typedef struct CircuitComponents {
        float resistance;
        float frequency;
        float inductance;
        float capacitance;
    } CircuitComponents;

int main(){

    CircuitComponents circuit;

    printf("Welcome to the impedance calculator\n");
        printf("Please enter the values below:\n");

    printf("Resistance in Ohms:");
        scanf("%f", &circuit.resistance);

    printf("Frequency in hertz:");
        scanf("%f", &circuit.frequency);

    printf("Capacitance in farads:");
        scanf("%f", &circuit.capacitance);

    printf("Inductance in henries:");
        scanf("%f", &circuit.inductance);

    float X = 0;
        X = (2 * (circuit.frequency)*(circuit.inductance))-(1/(2*(circuit.frequency)*(circuit.capacitance)));
    float Z = 0;
        Z = sqrt((circuit.resistance*circuit.resistance)+(X*X));
        //Z = sqrt((R2) + (X2)) interpretated as R^2 and X^2 rather than R*2 and X*2

    printf("the impedance is %.2f ohms\n", Z);

return 0;}