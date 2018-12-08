package IMC;


	import javax.swing.JOptionPane;
	import javax.swing.ImageIcon;
	import java.text.DecimalFormat;


	public class Paciente {

		public static void main(String[] args) {
			// TODO Auto-generated method stub
	  
			IMC imc =new IMC();
					int resposta;
			
			
			Object[] opcoes = {"Não","Sim"};
			DecimalFormat df = new DecimalFormat();
			
			do {
			float ResultadoIMC;
			String Peso=JOptionPane.showInputDialog("Digite o Peso");

			float peso=Float.parseFloat(Peso);
			String Altura=JOptionPane.showInputDialog("Digite a Altura");
		
			
			float altura=Float.parseFloat(Altura);
			ResultadoIMC=imc.calcularImc(peso, altura);
			
			
			if (ResultadoIMC<=18.5)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Abaixo do normal\n"+df.format(imc.calcularImc(peso, altura) ), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/abaixo_peso.jpg"));}
				
				
			if (18.5 < ResultadoIMC && ResultadoIMC <= 24.4)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Peso ideal\n"+df.format(imc.calcularImc(peso, altura)), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/peso_ideal.jpg"));}
			
			if (24.5 < ResultadoIMC && ResultadoIMC <= 29.9)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Pré-obesidade\n"+df.format(imc.calcularImc(peso, altura)), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/pre_obesidade.jpg"));}
				
			if (30 < ResultadoIMC && ResultadoIMC <= 34.9)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Obessidade classe I\n"+df.format(imc.calcularImc(peso, altura)), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/obesidade01.jpg"));}
				
			if (35 < ResultadoIMC && ResultadoIMC <= 39.9)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Obessidade classe II - severa\n"+df.format(imc.calcularImc(peso, altura)), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/obesidade02.jpg"));}
			
			if( ResultadoIMC >= 40)
				{df.applyPattern("0.00");
				JOptionPane.showMessageDialog(null, "Altura: "+Float.parseFloat(Altura)+"\nPeso: "+Float.parseFloat(Peso)+"\nIMC: Obsidade classe III - mórbida\n"+df.format(imc.calcularImc(peso, altura)), null, JOptionPane.INFORMATION_MESSAGE,new ImageIcon("src/IMC/obesidade03.jpg"));}
				
				resposta = JOptionPane.showOptionDialog(null,"Deseja calcular o peso para mais uma pessoa?","ESCOLHA",JOptionPane.DEFAULT_OPTION, JOptionPane.QUESTION_MESSAGE,null,opcoes,"Sim");

			} while (resposta == 1 );

			}
			
		}
