#include "extcode.h"
#pragma pack(push)
#pragma pack(1)

#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
	LVBoolean status;
	int32_t code;
	LStrHandle source;
	} TD1;


/*!
 * Cova_Arret_General
 */
void __stdcall Cova_Arret_General(TD1 *errorIn, TD1 *errorOut);
/*!
 * Cova_Bloque
 */
void __stdcall Cova_Bloque(char Fichier_Verrouillage[], TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Debloque
 */
void __stdcall Cova_Debloque(char Fichier_Verrouillage[], TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_GMV_Arret
 */
void __stdcall Cova_GMV_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_GMV_Init
 */
void __stdcall Cova_GMV_Init(uint8_t ModeFonctionnement, TD1 *errorIn, 
	uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_GMV_Mesure
 */
void __stdcall Cova_GMV_Mesure(int32_t TestId, TD1 *errorIn, TD1 *errorOut);
/*!
 * Cova_GMV_MesureTest
 */
void __stdcall Cova_GMV_MesureTest(int32_t TestId, uint8_t NombreDeBoucle, 
	TD1 *errorIn, double TempRature, uint8_t *BilanCritere, 
	uint8_t *BilanGabarit, uint8_t *BilanOctave, TD1 *errorOut);
/*!
 * Cova_GMV_Test
 */
void __stdcall Cova_GMV_Test(int32_t TestId, TD1 *errorIn, double TempRature, 
	uint8_t *BilanCritereEmergence, uint8_t *BilanGabarit, uint8_t *BilanOctave, 
	TD1 *errorOut);
/*!
 * Cova_Harmonique_Arret
 */
void __stdcall Cova_Harmonique_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Harmonique_Init
 */
void __stdcall Cova_Harmonique_Init(uint8_t ModeFonctionnement, TD1 *errorIn, 
	uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Harmonique_Mesure
 */
void __stdcall Cova_Harmonique_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Harmonique_MesureTest
 */
void __stdcall Cova_Harmonique_MesureTest(int32_t TestId, 
	uint8_t NombreDeBoucle, TD1 *errorIn, double VitesseTrsMin, 
	double TempRature, uint8_t *BilanGNRal, double Valeurs[], uint8_t Bilans[], 
	double *VitesseTrsMinMesurE, TD1 *errorOut, int32_t len, int32_t len2);
/*!
 * Cova_Harmonique_Test
 */
void __stdcall Cova_Harmonique_Test(int32_t TestId, TD1 *errorIn, 
	double VitesseTrsMin, double TempRature, uint8_t *BilanHarmoniques, 
	uint8_t *BilanVitesse, double Valeurs[], uint8_t Bilans[], 
	double *VitesseTrsMinMesurE, TD1 *errorOut, int32_t len, int32_t len2);
/*!
 * <B> Initialisation générale </B>
 * 
 * Ce vi permet d'effectuer toutes les initialisations nécessaires au bon 
 * déroulement des tests.
 * Le "Chemin d'accés" doit être le chemin vers le fichier "Definition.ini" 
 * _____________________
 * FRL le 25/07/2007
 * <B>(c)ASSYSTEM France</B>
 */
void __stdcall Cova_Initialisation_Generale(char CheminDAccS[], TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Micromoteur_Arret
 */
void __stdcall Cova_Micromoteur_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Micromoteur_Init
 */
void __stdcall Cova_Micromoteur_Init(uint8_t ModeFonctionnement, 
	TD1 *errorIn, uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Micromoteur_Mesure
 */
void __stdcall Cova_Micromoteur_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Micromoteur_MesureTest
 */
void __stdcall Cova_Micromoteur_MesureTest(int32_t TestId, 
	uint8_t NombreDeBoucle, TD1 *errorIn, double TempRature, uint8_t *Bilan, 
	double *Valeur, TD1 *errorOut);
/*!
 * Cova_Micromoteur_Test
 */
void __stdcall Cova_Micromoteur_Test(int32_t TestId, TD1 *errorIn, 
	double TempRature, uint8_t *Bilan, double *Valeur, TD1 *errorOut);
/*!
 * Cova_Microphone_Arret
 */
void __stdcall Cova_Microphone_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Microphone_Init
 */
void __stdcall Cova_Microphone_Init(uint8_t ModeFonctionnement, TD1 *errorIn, 
	uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Microphone_Mesure
 */
void __stdcall Cova_Microphone_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Microphone_MesureTest
 */
void __stdcall Cova_Microphone_MesureTest(int32_t TestId, 
	uint8_t NombreDeBoucle, TD1 *errorIn, double TempRature, uint8_t *Bilan, 
	double *Valeur, TD1 *errorOut);
/*!
 * Cova_Microphone_Test
 */
void __stdcall Cova_Microphone_Test(int32_t TestId, TD1 *errorIn, 
	double TempRature, uint8_t *Bilan, double *Valeur, TD1 *errorOut);
/*!
 * Cova_Ticking_Arret
 */
void __stdcall Cova_Ticking_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Ticking_Init
 */
void __stdcall Cova_Ticking_Init(uint8_t ModeFonctionnement, TD1 *errorIn, 
	uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Ticking_Mesure
 */
void __stdcall Cova_Ticking_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Ticking_MesureTest
 */
void __stdcall Cova_Ticking_MesureTest(int32_t TestId, 
	uint8_t NombreDeBoucle, TD1 *errorIn, double TempRature, uint8_t *Bilan, 
	double *Valeur, TD1 *errorOut);
/*!
 * Cova_Ticking_Test
 */
void __stdcall Cova_Ticking_Test(int32_t TestId, TD1 *errorIn, 
	double TempRature, uint8_t *Bilan, double *Valeur, TD1 *errorOut);
/*!
 * Cova_Vibration_Arret
 */
void __stdcall Cova_Vibration_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Vibration_Init
 */
void __stdcall Cova_Vibration_Init(uint8_t ModeFonctionnement, TD1 *errorIn, 
	uint32_t NumeroAppareil, char RefRenceAppareil[], uint8_t Banc, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Vibration_Mesure
 */
void __stdcall Cova_Vibration_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Vibration_MesureTest
 */
void __stdcall Cova_Vibration_MesureTest(int32_t TestId, 
	uint8_t NombreDeBoucle, double TempRature, TD1 *errorIn, uint8_t *BilanGNRal, 
	double Valeurs[], uint8_t *BilanVibrationVitesse, uint8_t Bilans[], 
	double *VibrationVitesse, uint8_t *BilanVitesse, double *Vitesse, 
	TD1 *errorOut, int32_t len, int32_t len2);
/*!
 * Cova_Vibration_Test
 */
void __stdcall Cova_Vibration_Test(double TempRature, TD1 *errorIn, 
	int32_t TestId, TD1 *errorOut, double Valeurs[], double *Vitesse, 
	uint8_t *BilanVitesse, double *VibrationVitesse, 
	uint8_t *BilanVibrationVitesse, uint8_t Bilans[], uint8_t *BilanGNRal, 
	int32_t len, int32_t len2);
/*!
 * Cova_Vitesse_Arret
 */
void __stdcall Cova_Vitesse_Arret(int32_t TestID, TD1 *errorInNoError, 
	TD1 *errorOut);
/*!
 * Cova_Vitesse_Init
 */
void __stdcall Cova_Vitesse_Init(uint32_t NumeroAppareil, TD1 *errorIn, 
	char RefRenceAppareil[], uint8_t Banc, uint8_t ModeFonctionnement, 
	uint8_t ModeEnregistrement, char NomDuTest[], TD1 *errorOut, int32_t *TestId);
/*!
 * Cova_Vitesse_Mesure
 */
void __stdcall Cova_Vitesse_Mesure(int32_t TestId, TD1 *errorIn, 
	TD1 *errorOut);
/*!
 * Cova_Vitesse_MesureTest
 */
void __stdcall Cova_Vitesse_MesureTest(int32_t TestId, TD1 *errorIn, 
	double TempRature, uint8_t NombreDeBoucle, double *Vitesse, 
	uint8_t *BilanVitesse, double *Courant, uint8_t *BilanCourant, TD1 *errorOut);
/*!
 * Cova_Vitesse_Test
 */
void __stdcall Cova_Vitesse_Test(int32_t TestId, double TempRature, 
	TD1 *errorIn, uint8_t *BilanCourant, double *Courant, uint8_t *BilanVitesse, 
	double *Vitesse, TD1 *errorOut);

MgErr __cdecl LVDLLStatus(char *errStr, int errStrLen, void *module);

void __cdecl SetExcursionFreeExecutionSetting(Bool32 value);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma pack(pop)

