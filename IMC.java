package IMC;

public class IMC {
	float peso;
	float altura;
	
	public float calcularImc(float peso, float altura){

		float imc;

		imc=(peso)/(altura*altura);
		return imc;

		}
		}
