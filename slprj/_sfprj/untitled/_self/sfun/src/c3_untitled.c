/* Include files */

#include "untitled_sfun.h"
#include "c3_untitled.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c3_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c3_emlrtRSI = { 3,  /* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#untitled:13"                       /* pathName */
};

static emlrtRSInfo c3_b_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#untitled:13"                       /* pathName */
};

static emlrtRSInfo c3_c_emlrtRSI = { 18,/* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#untitled:13"                       /* pathName */
};

static emlrtRSInfo c3_d_emlrtRSI = { 116,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_e_emlrtRSI = { 114,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_f_emlrtRSI = { 113,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_g_emlrtRSI = { 54,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_h_emlrtRSI = { 273,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_i_emlrtRSI = { 275,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_j_emlrtRSI = { 277,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_k_emlrtRSI = { 278,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c3_l_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo c3_m_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo c3_n_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c3_o_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c3_p_emlrtRSI = { 29,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRSInfo c3_q_emlrtRSI = { 53,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRSInfo c3_r_emlrtRSI = { 55,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRTEInfo c3_emlrtRTEI = { 18,/* lineNo */
  10,                                  /* colNo */
  "MATLAB Function2",                  /* fName */
  "#untitled:13"                       /* pName */
};

static emlrtRTEInfo c3_b_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "sprintf",                           /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pName */
};

static emlrtDCInfo c3_emlrtDCI = { 57, /* lineNo */
  53,                                  /* colNo */
  "sprintf",                           /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m",/* pName */
  4                                    /* checkKind */
};

static uint32_T c3_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
  1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
  2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
  951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
  1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
  1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
  3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
  1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
  761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
  3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
  699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
  1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
  4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
  3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
  4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
  170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
  1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
  1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
  1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
  3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
  501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
  1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
  2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
  2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
  4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
  2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
  2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
  3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
  733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
  1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
  627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
  3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
  3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
  3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
  354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
  1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
  1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
  3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
  2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
  2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
  548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
  1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
  3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
  2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
  191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
  3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
  396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
  3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
  2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
  3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
  1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
  1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
  976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
  2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
  766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
  3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
  1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
  607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
  3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
  1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
  2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
  4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
  551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
  3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
  1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
  552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
  181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
  3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
  4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
  478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
  3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
  786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
  2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
  4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
  4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
  3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
  3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
  370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
  3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
  1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
  2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
  2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
  4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
  1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
  506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
  138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
  3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
  1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
  2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
  643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
  1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
  4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
  4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
  1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
  3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
  3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
  3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
  190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
  2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
  453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
  4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
  2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
  363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
  1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
  2844269403U, 79981964U, 624U };

/* Function Declarations */
static void initialize_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void initialize_params_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance);
static void mdl_start_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void mdl_terminate_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c3_untitled(SFc3_untitledInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c3_untitled
  (SFc3_untitledInstanceStruct *chartInstance);
static void enable_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void disable_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void sf_gateway_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void ext_mode_exec_c3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static void c3_update_jit_animation_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance);
static void c3_do_animation_call_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c3_untitled(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_st);
static void initSimStructsc3_untitled(SFc3_untitledInstanceStruct *chartInstance);
static real_T c3_now(SFc3_untitledInstanceStruct *chartInstance);
static real_T c3_rand(SFc3_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c3_sp);
static real_T c3_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_a__output_of_length_, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_tmpStr, const char_T *c3_identifier,
  c3_emxArray_char_T *c3_y);
static void c3_d_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_u, const emlrtMsgIdentifier
  *c3_parentId, c3_emxArray_char_T *c3_y);
static real_T c3_e_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_initialpos1, const char_T *c3_identifier, boolean_T
  *c3_svPtr);
static real_T c3_f_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr);
static uint32_T c3_g_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_method, const char_T *c3_identifier, boolean_T *c3_svPtr);
static uint32_T c3_h_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr);
static void c3_i_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_d_state, const char_T *c3_identifier, boolean_T *c3_svPtr,
  uint32_T c3_y[625]);
static void c3_j_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr, uint32_T c3_y[625]);
static void c3_k_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_d_state, const char_T *c3_identifier, boolean_T *c3_svPtr,
  uint32_T c3_y[2]);
static void c3_l_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr, uint32_T c3_y[2]);
static uint8_T c3_m_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_untitled, const char_T *c3_identifier);
static uint8_T c3_n_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_slStringInitializeDynamicBuffers(SFc3_untitledInstanceStruct
  *chartInstance);
static void c3_chart_data_browse_helper(SFc3_untitledInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig);
static const mxArray *c3_feval(SFc3_untitledInstanceStruct *chartInstance, const
  emlrtStack *c3_sp, const mxArray *c3_input0, const mxArray *c3_input1, const
  mxArray *c3_input2);
static const mxArray *c3_length(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_input0);
static void c3_emxEnsureCapacity_char_T(SFc3_untitledInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, c3_emxArray_char_T *c3_emxArray,
  int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_char_T(SFc3_untitledInstanceStruct *chartInstance, const
  emlrtStack *c3_sp, c3_emxArray_char_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxFree_char_T(SFc3_untitledInstanceStruct *chartInstance,
  c3_emxArray_char_T **c3_pEmxArray);
static void init_dsm_address_info(SFc3_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_initialpos1_not_empty = false;
  chartInstance->c3_seed_not_empty = false;
  chartInstance->c3_method_not_empty = false;
  chartInstance->c3_state_not_empty = false;
  chartInstance->c3_b_state_not_empty = false;
  chartInstance->c3_c_state_not_empty = false;
  chartInstance->c3_is_active_c3_untitled = 0U;
}

static void initialize_params_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c3_untitled(SFc3_untitledInstanceStruct *
  chartInstance)
{
  static const uint32_T c3_decisionTxtEndIdx = 0U;
  static const uint32_T c3_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c3_chart_data_browse_helper);
  chartInstance->c3_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsDebuggerActive,
    &chartInstance->c3_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c3_mlFcnLineNumber, &chartInstance->c3_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c3_covrtInstance, 1U, 0U, 1U,
    36U);
  covrtChartInitFcn(chartInstance->c3_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c3_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c3_decisionTxtStartIdx, &c3_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c3_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c3_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 509);
  covrtEmlSaturationInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U, 115, -1,
    129);
  covrtEmlIfInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U, 158, 181, -1,
                    226, false);
}

static void mdl_cleanup_runtime_resources_c3_untitled
  (SFc3_untitledInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c3_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c3_covrtInstance);
}

static void enable_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  static char_T c3_cv[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c3_cv1[7] = { 'i', 'n', 'i', 't', '2', '=', ' ' };

  static char_T c3_formatSpec[2] = { '%', 'f' };

  time_t c3_b_eTime;
  time_t c3_eTime;
  c3_emxArray_char_T *c3_b_u;
  c3_emxArray_char_T *c3_charStr;
  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_d_st;
  emlrtStack c3_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_tmpStr = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_a;
  real_T c3_b_a;
  real_T c3_b_d;
  real_T c3_b_mti;
  real_T c3_b_theta2;
  real_T c3_b_varargin_1;
  real_T c3_b_x;
  real_T c3_b_y2;
  real_T c3_c_varargin_1;
  real_T c3_c_x;
  real_T c3_d1;
  real_T c3_d_x;
  real_T c3_e_x;
  real_T c3_f_x;
  real_T c3_g_x;
  real_T c3_h_x;
  real_T c3_i_x;
  real_T c3_j_x;
  real_T c3_s;
  real_T c3_s0;
  real_T c3_strSize;
  real_T c3_x;
  int32_T c3_exitg1;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_loop_ub;
  int32_T c3_mti;
  int32_T c3_prevEpochTime;
  int32_T c3_t;
  uint32_T c3_arg3;
  uint32_T c3_b_seed;
  uint32_T c3_r;
  uint32_T c3_u;
  uint32_T c3_u1;
  uint32_T c3_varargin_1;
  boolean_T c3_b_rEQ0;
  boolean_T c3_covSaturation;
  boolean_T c3_rEQ0;
  c3_st.tls = chartInstance->c3_fEmlrtCtx;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_d_st.prev = &c3_c_st;
  c3_d_st.tls = c3_c_st.tls;
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c3_i = 0; c3_i < 3; c3_i++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 0U, (*chartInstance->c3_d)
                      [c3_i]);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c3_covrtInstance, 4U, 0, 0);
  c3_b_st.site = &c3_emlrtRSI;
  if (!chartInstance->c3_seed_not_empty) {
    chartInstance->c3_seed = 0U;
    chartInstance->c3_seed_not_empty = true;
  }

  c3_c_st.site = &c3_g_emlrtRSI;
  if (!chartInstance->c3_method_not_empty) {
    chartInstance->c3_method = 7U;
    chartInstance->c3_method_not_empty = true;
  }

  c3_c_st.site = &c3_f_emlrtRSI;
  c3_d_st.site = &c3_h_emlrtRSI;
  c3_x = c3_now(chartInstance) * 8.64E+6;
  c3_b_x = c3_x;
  c3_b_x = muDoubleScalarFloor(c3_b_x);
  c3_c_x = c3_b_x;
  c3_a = c3_c_x;
  c3_d_x = c3_a;
  c3_e_x = c3_d_x;
  if (c3_e_x == 0.0) {
    c3_s = 0.0;
  } else {
    c3_s = muDoubleScalarRem(c3_e_x, 2.147483647E+9);
    c3_rEQ0 = (c3_s == 0.0);
    if (c3_rEQ0) {
      c3_s = 0.0;
    } else if (c3_e_x < 0.0) {
      c3_s += 2.147483647E+9;
    }
  }

  c3_d_st.site = &c3_i_emlrtRSI;
  c3_eTime = time(NULL);
  c3_prevEpochTime = (int32_T)c3_eTime + 1;
  do {
    c3_exitg1 = 0;
    c3_d_st.site = &c3_j_emlrtRSI;
    c3_b_eTime = time(NULL);
    c3_t = (int32_T)c3_b_eTime;
    if (c3_t <= c3_prevEpochTime) {
      c3_d_st.site = &c3_k_emlrtRSI;
      c3_f_x = c3_now(chartInstance) * 8.64E+6;
      c3_g_x = c3_f_x;
      c3_g_x = muDoubleScalarFloor(c3_g_x);
      c3_h_x = c3_g_x;
      c3_b_a = c3_h_x;
      c3_i_x = c3_b_a;
      c3_j_x = c3_i_x;
      if (c3_j_x == 0.0) {
        c3_s0 = 0.0;
      } else {
        c3_s0 = muDoubleScalarRem(c3_j_x, 2.147483647E+9);
        c3_b_rEQ0 = (c3_s0 == 0.0);
        if (c3_b_rEQ0) {
          c3_s0 = 0.0;
        } else if (c3_j_x < 0.0) {
          c3_s0 += 2.147483647E+9;
        }
      }

      if (c3_s != c3_s0) {
        c3_exitg1 = 1;
      }
    } else {
      c3_exitg1 = 1;
    }
  } while (c3_exitg1 == 0);

  c3_b_d = muDoubleScalarRound(c3_s);
  c3_covSaturation = false;
  if (c3_b_d < 4.294967296E+9) {
    if (c3_b_d >= 0.0) {
      c3_u = (uint32_T)c3_b_d;
    } else {
      c3_covSaturation = true;
      c3_u = 0U;
    }
  } else if (c3_b_d >= 4.294967296E+9) {
    c3_covSaturation = true;
    c3_u = MAX_uint32_T;
  } else {
    c3_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c3_covrtInstance, 4, 0, 0, 0,
    c3_covSaturation);
  chartInstance->c3_seed = c3_u;
  c3_c_st.site = &c3_e_emlrtRSI;
  if (!chartInstance->c3_method_not_empty) {
    chartInstance->c3_method = 7U;
    chartInstance->c3_method_not_empty = true;
  }

  c3_c_st.site = &c3_d_emlrtRSI;
  c3_varargin_1 = chartInstance->c3_seed;
  if (!chartInstance->c3_state_not_empty) {
    for (c3_i1 = 0; c3_i1 < 625; c3_i1++) {
      chartInstance->c3_state[c3_i1] = c3_uv[c3_i1];
    }

    chartInstance->c3_state_not_empty = true;
  }

  c3_arg3 = c3_varargin_1;
  c3_b_seed = c3_arg3;
  c3_r = c3_b_seed;
  chartInstance->c3_state[0] = c3_b_seed;
  for (c3_mti = 0; c3_mti < 623; c3_mti++) {
    c3_b_mti = (real_T)c3_mti + 2.0;
    c3_d1 = muDoubleScalarRound(c3_b_mti - 1.0);
    if (c3_d1 < 4.294967296E+9) {
      if (c3_d1 >= 0.0) {
        c3_u1 = (uint32_T)c3_d1;
      } else {
        c3_u1 = 0U;
      }
    } else if (c3_d1 >= 4.294967296E+9) {
      c3_u1 = MAX_uint32_T;
    } else {
      c3_u1 = 0U;
    }

    c3_r = (c3_r ^ c3_r >> 30U) * 1812433253U + c3_u1;
    chartInstance->c3_state[(int32_T)c3_b_mti - 1] = c3_r;
  }

  chartInstance->c3_state[624] = 624U;
  if (covrtEmlIfEval(chartInstance->c3_covrtInstance, 4U, 0, 0,
                     !chartInstance->c3_initialpos1_not_empty)) {
    c3_b_st.site = &c3_b_emlrtRSI;
    chartInstance->c3_initialpos1 = c3_rand(chartInstance, &c3_b_st) * 0.3 +
      0.85;
    chartInstance->c3_initialpos1_not_empty = true;
  }

  c3_b_y2 = (*chartInstance->c3_d)[0] - chartInstance->c3_initialpos1;
  c3_b_theta2 = (*chartInstance->c3_d)[2];
  c3_emxInit_char_T(chartInstance, &c3_st, &c3_charStr, 2, &c3_b_emlrtRTEI);
  c3_b_st.site = &c3_c_emlrtRSI;
  c3_b_varargin_1 = chartInstance->c3_initialpos1;
  c3_c_st.site = &c3_p_emlrtRSI;
  c3_c_varargin_1 = c3_b_varargin_1;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 7), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", c3_formatSpec, 10, 0U, 1U, 0U, 2, 1,
    2), false);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_c_varargin_1, 0, 0U, 0U, 0U, 0),
                false);
  c3_d_st.site = &c3_q_emlrtRSI;
  sf_mex_assign(&c3_tmpStr, c3_feval(chartInstance, &c3_d_st, c3_y, c3_b_y,
    c3_c_y), false);
  c3_d_st.site = &c3_r_emlrtRSI;
  c3_strSize = c3_emlrt_marshallIn(chartInstance, c3_length(chartInstance,
    &c3_d_st, sf_mex_dup(c3_tmpStr)), "<output of length>");
  if (!(c3_strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c3_strSize, &c3_emlrtDCI, &c3_c_st);
  }

  c3_c_emlrt_marshallIn(chartInstance, &c3_c_st, sf_mex_dup(c3_tmpStr), "tmpStr",
                        c3_charStr);
  sf_mex_destroy(&c3_tmpStr);
  c3_emxInit_char_T(chartInstance, &c3_st, &c3_b_u, 2, &c3_emlrtRTEI);
  c3_i2 = c3_b_u->size[0] * c3_b_u->size[1];
  c3_b_u->size[0] = 1;
  c3_b_u->size[1] = 7 + c3_charStr->size[1];
  c3_emxEnsureCapacity_char_T(chartInstance, &c3_st, c3_b_u, c3_i2,
    &c3_emlrtRTEI);
  for (c3_i3 = 0; c3_i3 < 7; c3_i3++) {
    c3_b_u->data[c3_i3] = c3_cv1[c3_i3];
  }

  c3_loop_ub = c3_charStr->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_b_u->data[c3_i4 + 7] = c3_charStr->data[c3_i4];
  }

  c3_emxFree_char_T(chartInstance, &c3_charStr);
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_b_u->data, 10, 0U, 1U, 0U, 2,
    c3_b_u->size[0], c3_b_u->size[1]), false);
  c3_emxFree_char_T(chartInstance, &c3_b_u);
  sf_mex_call(&c3_st, NULL, "disp", 0U, 1U, 14, c3_d_y);
  *chartInstance->c3_x2 = 0.0;
  *chartInstance->c3_y2 = c3_b_y2;
  *chartInstance->c3_theta2 = c3_b_theta2;
  c3_do_animation_call_c3_untitled(chartInstance);
  covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 1U, *chartInstance->c3_x2);
  covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 2U, *chartInstance->c3_y2);
  covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 3U,
                    *chartInstance->c3_theta2);
}

static void ext_mode_exec_c3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_update_jit_animation_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_do_animation_call_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c3_untitled(SFc3_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c3_b_y = NULL;
  const mxArray *c3_c_y = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  const mxArray *c3_j_y = NULL;
  const mxArray *c3_k_y = NULL;
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(10, 1), false);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", chartInstance->c3_theta2, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", chartInstance->c3_x2, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", chartInstance->c3_y2, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_e_y = NULL;
  if (!chartInstance->c3_initialpos1_not_empty) {
    sf_mex_assign(&c3_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_e_y, sf_mex_create("y", &chartInstance->c3_initialpos1, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_f_y = NULL;
  if (!chartInstance->c3_method_not_empty) {
    sf_mex_assign(&c3_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_f_y, sf_mex_create("y", &chartInstance->c3_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_g_y = NULL;
  if (!chartInstance->c3_method_not_empty) {
    sf_mex_assign(&c3_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_g_y, sf_mex_create("y", &chartInstance->c3_seed, 7, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_h_y = NULL;
  if (!chartInstance->c3_method_not_empty) {
    sf_mex_assign(&c3_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_h_y, sf_mex_create("y", &chartInstance->c3_c_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_i_y = NULL;
  if (!chartInstance->c3_state_not_empty) {
    sf_mex_assign(&c3_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_i_y, sf_mex_create("y", chartInstance->c3_state, 7, 0U, 1U,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c3_y, 7, c3_i_y);
  c3_j_y = NULL;
  if (!chartInstance->c3_b_state_not_empty) {
    sf_mex_assign(&c3_j_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_j_y, sf_mex_create("y", chartInstance->c3_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c3_y, 8, c3_j_y);
  c3_k_y = NULL;
  sf_mex_assign(&c3_k_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_untitled, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 9, c3_k_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_untitled(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_st)
{
  const mxArray *c3_u;
  int32_T c3_i;
  int32_T c3_i1;
  uint32_T c3_b_uv[625];
  uint32_T c3_uv1[2];
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_theta2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "theta2");
  *chartInstance->c3_x2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 1)), "x2");
  *chartInstance->c3_y2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "y2");
  chartInstance->c3_initialpos1 = c3_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 3)), "initialpos1",
    &chartInstance->c3_initialpos1_not_empty);
  chartInstance->c3_method = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 4)), "method", &chartInstance->c3_method_not_empty);
  chartInstance->c3_seed = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 5)), "seed", &chartInstance->c3_seed_not_empty);
  chartInstance->c3_c_state = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 6)), "state", &chartInstance->c3_c_state_not_empty);
  c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 7)),
                        "state", &chartInstance->c3_state_not_empty, c3_b_uv);
  for (c3_i = 0; c3_i < 625; c3_i++) {
    chartInstance->c3_state[c3_i] = c3_b_uv[c3_i];
  }

  c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 8)),
                        "state", &chartInstance->c3_b_state_not_empty, c3_uv1);
  for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
    chartInstance->c3_b_state[c3_i1] = c3_uv1[c3_i1];
  }

  chartInstance->c3_is_active_c3_untitled = c3_m_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 9)), "is_active_c3_untitled");
  sf_mex_destroy(&c3_u);
  sf_mex_destroy(&c3_st);
}

static void initSimStructsc3_untitled(SFc3_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c3_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static real_T c3_now(SFc3_untitledInstanceStruct *chartInstance)
{
  time_t c3_rawtime;
  c3_sxaDueAh1f53T9ESYg9Uc4E c3_timeinfoDouble;
  struct tm c3_timeinfo;
  real_T c3_cDaysMonthWise[12];
  real_T c3_a;
  real_T c3_b_a;
  real_T c3_b_r;
  real_T c3_b_x;
  real_T c3_c_a;
  real_T c3_c_r;
  real_T c3_c_x;
  real_T c3_dDateNum;
  real_T c3_d_x;
  real_T c3_e_x;
  real_T c3_f_x;
  real_T c3_g_x;
  real_T c3_h_x;
  real_T c3_i_x;
  real_T c3_j_x;
  real_T c3_k_x;
  real_T c3_l_x;
  real_T c3_m_x;
  real_T c3_n_x;
  real_T c3_o_x;
  real_T c3_r;
  real_T c3_x;
  boolean_T c3_b_rEQ0;
  boolean_T c3_c_rEQ0;
  boolean_T c3_guard1 = false;
  boolean_T c3_rEQ0;
  (void)chartInstance;
  c3_cDaysMonthWise[0] = 0.0;
  c3_cDaysMonthWise[1] = 31.0;
  c3_cDaysMonthWise[2] = 59.0;
  c3_cDaysMonthWise[3] = 90.0;
  c3_cDaysMonthWise[4] = 120.0;
  c3_cDaysMonthWise[5] = 151.0;
  c3_cDaysMonthWise[6] = 181.0;
  c3_cDaysMonthWise[7] = 212.0;
  c3_cDaysMonthWise[8] = 243.0;
  c3_cDaysMonthWise[9] = 273.0;
  c3_cDaysMonthWise[10] = 304.0;
  c3_cDaysMonthWise[11] = 334.0;
  time(&c3_rawtime);
  c3_timeinfo = *localtime(&c3_rawtime);
  c3_timeinfo.tm_year += 1900;
  c3_timeinfo.tm_mon++;
  c3_timeinfoDouble.tm_min = (real_T)c3_timeinfo.tm_min;
  c3_timeinfoDouble.tm_sec = (real_T)c3_timeinfo.tm_sec;
  c3_timeinfoDouble.tm_hour = (real_T)c3_timeinfo.tm_hour;
  c3_timeinfoDouble.tm_mday = (real_T)c3_timeinfo.tm_mday;
  c3_timeinfoDouble.tm_mon = (real_T)c3_timeinfo.tm_mon;
  c3_timeinfoDouble.tm_year = (real_T)c3_timeinfo.tm_year;
  c3_x = c3_timeinfoDouble.tm_year / 4.0;
  c3_b_x = c3_x;
  c3_b_x = muDoubleScalarCeil(c3_b_x);
  c3_c_x = c3_timeinfoDouble.tm_year / 100.0;
  c3_d_x = c3_c_x;
  c3_d_x = muDoubleScalarCeil(c3_d_x);
  c3_e_x = c3_timeinfoDouble.tm_year / 400.0;
  c3_f_x = c3_e_x;
  c3_f_x = muDoubleScalarCeil(c3_f_x);
  c3_dDateNum = ((((365.0 * c3_timeinfoDouble.tm_year + c3_b_x) - c3_d_x) +
                  c3_f_x) + c3_cDaysMonthWise[(int32_T)c3_timeinfoDouble.tm_mon
                 - 1]) + c3_timeinfoDouble.tm_mday;
  if (c3_timeinfoDouble.tm_mon > 2.0) {
    c3_g_x = c3_timeinfoDouble.tm_year;
    c3_a = c3_g_x;
    c3_h_x = c3_a;
    c3_i_x = c3_h_x;
    if (c3_i_x == 0.0) {
      c3_r = 0.0;
    } else {
      c3_r = muDoubleScalarRem(c3_i_x, 4.0);
      c3_rEQ0 = (c3_r == 0.0);
      if (c3_rEQ0) {
        c3_r = 0.0;
      } else if (c3_i_x < 0.0) {
        c3_r += 4.0;
      }
    }

    c3_guard1 = false;
    if (c3_r == 0.0) {
      c3_j_x = c3_timeinfoDouble.tm_year;
      c3_b_a = c3_j_x;
      c3_k_x = c3_b_a;
      c3_m_x = c3_k_x;
      if (c3_m_x == 0.0) {
        c3_b_r = 0.0;
      } else {
        c3_b_r = muDoubleScalarRem(c3_m_x, 100.0);
        c3_b_rEQ0 = (c3_b_r == 0.0);
        if (c3_b_rEQ0) {
          c3_b_r = 0.0;
        } else if (c3_m_x < 0.0) {
          c3_b_r += 100.0;
        }
      }

      if (c3_b_r != 0.0) {
        c3_dDateNum++;
      } else {
        c3_guard1 = true;
      }
    } else {
      c3_guard1 = true;
    }

    if (c3_guard1) {
      c3_l_x = c3_timeinfoDouble.tm_year;
      c3_c_a = c3_l_x;
      c3_n_x = c3_c_a;
      c3_o_x = c3_n_x;
      if (c3_o_x == 0.0) {
        c3_c_r = 0.0;
      } else {
        c3_c_r = muDoubleScalarRem(c3_o_x, 400.0);
        c3_c_rEQ0 = (c3_c_r == 0.0);
        if (c3_c_rEQ0) {
          c3_c_r = 0.0;
        } else if (c3_o_x < 0.0) {
          c3_c_r += 400.0;
        }
      }

      if (c3_c_r == 0.0) {
        c3_dDateNum++;
      }
    }
  }

  c3_dDateNum += ((c3_timeinfoDouble.tm_hour * 3600.0 + c3_timeinfoDouble.tm_min
                   * 60.0) + c3_timeinfoDouble.tm_sec) / 86400.0;
  return c3_dDateNum;
}

static real_T c3_rand(SFc3_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c3_sp)
{
  static char_T c3_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c3_b_st;
  emlrtStack c3_c_st;
  emlrtStack c3_d_st;
  emlrtStack c3_st;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  real_T c3_b_d;
  real_T c3_b_j;
  real_T c3_b_r;
  real_T c3_c_kk;
  int32_T c3_a;
  int32_T c3_b_kk;
  int32_T c3_exitg1;
  int32_T c3_i;
  int32_T c3_j;
  int32_T c3_k;
  int32_T c3_kk;
  uint32_T c3_u[2];
  uint32_T c3_b_y;
  uint32_T c3_c_y;
  uint32_T c3_d_y;
  uint32_T c3_e_y;
  uint32_T c3_f_y;
  uint32_T c3_g_y;
  uint32_T c3_mti;
  uint32_T c3_y;
  boolean_T c3_b_isvalid;
  boolean_T c3_exitg2;
  boolean_T c3_isvalid;
  c3_st.prev = c3_sp;
  c3_st.tls = c3_sp->tls;
  c3_b_st.prev = &c3_st;
  c3_b_st.tls = c3_st.tls;
  c3_c_st.prev = &c3_b_st;
  c3_c_st.tls = c3_b_st.tls;
  c3_d_st.prev = &c3_c_st;
  c3_d_st.tls = c3_c_st.tls;
  c3_st.site = &c3_l_emlrtRSI;
  if (!chartInstance->c3_method_not_empty) {
    chartInstance->c3_method = 7U;
    chartInstance->c3_method_not_empty = true;
  }

  c3_b_st.site = &c3_m_emlrtRSI;
  if (!chartInstance->c3_state_not_empty) {
    for (c3_i = 0; c3_i < 625; c3_i++) {
      chartInstance->c3_state[c3_i] = c3_uv[c3_i];
    }

    chartInstance->c3_state_not_empty = true;
  }

  c3_c_st.site = &c3_n_emlrtRSI;
  c3_d_st.site = &c3_o_emlrtRSI;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    c3_exitg1 = 0;
    for (c3_j = 0; c3_j < 2; c3_j++) {
      c3_b_j = (real_T)c3_j + 1.0;
      c3_mti = chartInstance->c3_state[624] + 1U;
      if ((real_T)c3_mti >= 625.0) {
        for (c3_kk = 0; c3_kk < 227; c3_kk++) {
          c3_c_kk = (real_T)c3_kk + 1.0;
          c3_y = (chartInstance->c3_state[(int32_T)c3_c_kk - 1] & 2147483648U) |
            (chartInstance->c3_state[(int32_T)(c3_c_kk + 1.0) - 1] & 2147483647U);
          c3_b_y = c3_y;
          c3_d_y = c3_b_y;
          if ((c3_d_y & 1U) == 0U) {
            c3_d_y >>= 1U;
          } else {
            c3_d_y = c3_d_y >> 1U ^ 2567483615U;
          }

          chartInstance->c3_state[(int32_T)c3_c_kk - 1] =
            chartInstance->c3_state[(int32_T)(c3_c_kk + 397.0) - 1] ^ c3_d_y;
        }

        for (c3_b_kk = 0; c3_b_kk < 396; c3_b_kk++) {
          c3_c_kk = (real_T)c3_b_kk + 228.0;
          c3_y = (chartInstance->c3_state[(int32_T)c3_c_kk - 1] & 2147483648U) |
            (chartInstance->c3_state[(int32_T)(c3_c_kk + 1.0) - 1] & 2147483647U);
          c3_f_y = c3_y;
          c3_g_y = c3_f_y;
          if ((c3_g_y & 1U) == 0U) {
            c3_g_y >>= 1U;
          } else {
            c3_g_y = c3_g_y >> 1U ^ 2567483615U;
          }

          chartInstance->c3_state[(int32_T)c3_c_kk - 1] =
            chartInstance->c3_state[(int32_T)((c3_c_kk + 1.0) - 228.0) - 1] ^
            c3_g_y;
        }

        c3_y = (chartInstance->c3_state[623] & 2147483648U) |
          (chartInstance->c3_state[0] & 2147483647U);
        c3_c_y = c3_y;
        c3_e_y = c3_c_y;
        if ((c3_e_y & 1U) == 0U) {
          c3_e_y >>= 1U;
        } else {
          c3_e_y = c3_e_y >> 1U ^ 2567483615U;
        }

        chartInstance->c3_state[623] = chartInstance->c3_state[396] ^ c3_e_y;
        c3_mti = 1U;
      }

      c3_y = chartInstance->c3_state[(int32_T)c3_mti - 1];
      chartInstance->c3_state[624] = c3_mti;
      c3_y ^= c3_y >> 11U;
      c3_y ^= c3_y << 7U & 2636928640U;
      c3_y ^= c3_y << 15U & 4022730752U;
      c3_y ^= c3_y >> 18U;
      c3_u[(int32_T)c3_b_j - 1] = c3_y;
    }

    c3_u[0] >>= 5U;
    c3_u[1] >>= 6U;
    c3_b_r = 1.1102230246251565E-16 * ((real_T)c3_u[0] * 6.7108864E+7 + (real_T)
      c3_u[1]);
    if (c3_b_r == 0.0) {
      if (((real_T)chartInstance->c3_state[624] >= 1.0) && ((real_T)
           chartInstance->c3_state[624] < 625.0)) {
        c3_isvalid = true;
      } else {
        c3_isvalid = false;
      }

      c3_b_isvalid = c3_isvalid;
      if (c3_isvalid) {
        c3_b_isvalid = false;
        c3_k = 0;
        c3_exitg2 = false;
        while ((!c3_exitg2) && (c3_k + 1 < 625)) {
          if ((real_T)chartInstance->c3_state[c3_k] == 0.0) {
            c3_a = c3_k + 1;
            c3_k = c3_a;
          } else {
            c3_b_isvalid = true;
            c3_exitg2 = true;
          }
        }
      }

      if (!c3_b_isvalid) {
        c3_h_y = NULL;
        sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        c3_i_y = NULL;
        sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        sf_mex_call(&c3_d_st, &c3_emlrtMCI, "error", 0U, 2U, 14, c3_h_y, 14,
                    sf_mex_call(&c3_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c3_d_st, NULL, "message", 1U, 1U, 14, c3_i_y)));
      }
    } else {
      c3_exitg1 = 1;
    }
  } while (c3_exitg1 == 0);

  c3_b_d = c3_b_r;
  return c3_b_d;
}

static real_T c3_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_a__output_of_length_, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_a__output_of_length_),
    &c3_thisId);
  sf_mex_destroy(&c3_a__output_of_length_);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_b_d;
  real_T c3_y;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_d, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_b_d;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_tmpStr, const char_T *c3_identifier,
  c3_emxArray_char_T *c3_y)
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_d_emlrt_marshallIn(chartInstance, c3_sp, sf_mex_dup(c3_tmpStr), &c3_thisId,
                        c3_y);
  sf_mex_destroy(&c3_tmpStr);
}

static void c3_d_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_u, const emlrtMsgIdentifier
  *c3_parentId, c3_emxArray_char_T *c3_y)
{
  static boolean_T c3_bv1[2] = { false, true };

  c3_emxArray_char_T *c3_r;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_loop_ub;
  uint32_T c3_b_uv[2];
  boolean_T c3_bv[2];
  c3_emxInit_char_T(chartInstance, c3_sp, &c3_r, 2, (emlrtRTEInfo *)NULL);
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_b_uv[c3_i] = 1U + 4294967294U * (uint32_T)c3_i;
  }

  c3_i1 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = sf_mex_get_dimension(c3_u, 0);
  c3_r->size[1] = sf_mex_get_dimension(c3_u, 1);
  c3_emxEnsureCapacity_char_T(chartInstance, c3_sp, c3_r, c3_i1, (emlrtRTEInfo *)
    NULL);
  for (c3_i2 = 0; c3_i2 < 2; c3_i2++) {
    c3_bv[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_u), c3_r->data, 0, 10, 0U, 1, 0U,
                   2, c3_bv, c3_b_uv, c3_r->size);
  c3_i3 = c3_y->size[0] * c3_y->size[1];
  c3_y->size[0] = 1;
  c3_y->size[1] = c3_r->size[1];
  c3_emxEnsureCapacity_char_T(chartInstance, c3_sp, c3_y, c3_i3, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_r->size[0] * c3_r->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_y->data[c3_i4] = c3_r->data[c3_i4];
  }

  sf_mex_destroy(&c3_u);
  c3_emxFree_char_T(chartInstance, &c3_r);
}

static real_T c3_e_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_initialpos1, const char_T *c3_identifier, boolean_T
  *c3_svPtr)
{
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_initialpos1),
    &c3_thisId, c3_svPtr);
  sf_mex_destroy(&c3_b_initialpos1);
  return c3_y;
}

static real_T c3_f_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr)
{
  real_T c3_b_d;
  real_T c3_y;
  (void)chartInstance;
  if (mxIsEmpty(c3_u)) {
    *c3_svPtr = false;
  } else {
    *c3_svPtr = true;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_d, 1, 0, 0U, 0, 0U, 0);
    c3_y = c3_b_d;
  }

  sf_mex_destroy(&c3_u);
  return c3_y;
}

static uint32_T c3_g_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_method, const char_T *c3_identifier, boolean_T *c3_svPtr)
{
  emlrtMsgIdentifier c3_thisId;
  uint32_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_method),
    &c3_thisId, c3_svPtr);
  sf_mex_destroy(&c3_b_method);
  return c3_y;
}

static uint32_T c3_h_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr)
{
  uint32_T c3_b_u;
  uint32_T c3_y;
  (void)chartInstance;
  if (mxIsEmpty(c3_u)) {
    *c3_svPtr = false;
  } else {
    *c3_svPtr = true;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 7, 0U, 0, 0U, 0);
    c3_y = c3_b_u;
  }

  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_i_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_d_state, const char_T *c3_identifier, boolean_T *c3_svPtr,
  uint32_T c3_y[625])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_d_state), &c3_thisId,
                        c3_svPtr, c3_y);
  sf_mex_destroy(&c3_d_state);
}

static void c3_j_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr, uint32_T c3_y[625])
{
  int32_T c3_i;
  uint32_T c3_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c3_u)) {
    *c3_svPtr = false;
  } else {
    *c3_svPtr = true;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c3_i = 0; c3_i < 625; c3_i++) {
      c3_y[c3_i] = c3_b_uv[c3_i];
    }
  }

  sf_mex_destroy(&c3_u);
}

static void c3_k_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_d_state, const char_T *c3_identifier, boolean_T *c3_svPtr,
  uint32_T c3_y[2])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_d_state), &c3_thisId,
                        c3_svPtr, c3_y);
  sf_mex_destroy(&c3_d_state);
}

static void c3_l_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T
  *c3_svPtr, uint32_T c3_y[2])
{
  int32_T c3_i;
  uint32_T c3_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c3_u)) {
    *c3_svPtr = false;
  } else {
    *c3_svPtr = true;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_b_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c3_i = 0; c3_i < 2; c3_i++) {
      c3_y[c3_i] = c3_b_uv[c3_i];
    }
  }

  sf_mex_destroy(&c3_u);
}

static uint8_T c3_m_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_b_is_active_c3_untitled, const char_T *c3_identifier)
{
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  c3_thisId.fIdentifier = (const char_T *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_untitled), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_untitled);
  return c3_y;
}

static uint8_T c3_n_emlrt_marshallIn(SFc3_untitledInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_b_u;
  uint8_T c3_y;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b_u, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_b_u;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_slStringInitializeDynamicBuffers(SFc3_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_chart_data_browse_helper(SFc3_untitledInstanceStruct
  *chartInstance, int32_T c3_ssIdNumber, const mxArray **c3_mxData, uint8_T
  *c3_isValueTooBig)
{
  real_T c3_b_d;
  real_T c3_d1;
  real_T c3_d2;
  *c3_mxData = NULL;
  *c3_mxData = NULL;
  *c3_isValueTooBig = 0U;
  switch (c3_ssIdNumber) {
   case 5U:
    c3_b_d = *chartInstance->c3_x2;
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", &c3_b_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c3_d1 = *chartInstance->c3_y2;
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", &c3_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", *chartInstance->c3_d, 0, 0U,
      1U, 0U, 1, 3), false);
    break;

   case 9U:
    c3_d2 = *chartInstance->c3_theta2;
    sf_mex_assign(c3_mxData, sf_mex_create("mxData", &c3_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c3_feval(SFc3_untitledInstanceStruct *chartInstance, const
  emlrtStack *c3_sp, const mxArray *c3_input0, const mxArray *c3_input1, const
  mxArray *c3_input2)
{
  const mxArray *c3_m = NULL;
  (void)chartInstance;
  c3_m = NULL;
  sf_mex_assign(&c3_m, sf_mex_call(c3_sp, NULL, "feval", 1U, 3U, 14, sf_mex_dup
    (c3_input0), 14, sf_mex_dup(c3_input1), 14, sf_mex_dup(c3_input2)), false);
  sf_mex_destroy(&c3_input0);
  sf_mex_destroy(&c3_input1);
  sf_mex_destroy(&c3_input2);
  return c3_m;
}

static const mxArray *c3_length(SFc3_untitledInstanceStruct *chartInstance,
  const emlrtStack *c3_sp, const mxArray *c3_input0)
{
  const mxArray *c3_m = NULL;
  (void)chartInstance;
  c3_m = NULL;
  sf_mex_assign(&c3_m, sf_mex_call(c3_sp, NULL, "length", 1U, 1U, 14, sf_mex_dup
    (c3_input0)), false);
  sf_mex_destroy(&c3_input0);
  return c3_m;
}

static void c3_emxEnsureCapacity_char_T(SFc3_untitledInstanceStruct
  *chartInstance, const emlrtStack *c3_sp, c3_emxArray_char_T *c3_emxArray,
  int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_i;
  int32_T c3_newCapacity;
  int32_T c3_newNumel;
  void *c3_newData;
  (void)chartInstance;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c3_newNumel,
      (size_t)(uint32_T)c3_emxArray->size[c3_i], c3_srcLocation, (void *)c3_sp);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(char_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, (void *)c3_sp);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(char_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (char_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxInit_char_T(SFc3_untitledInstanceStruct *chartInstance, const
  emlrtStack *c3_sp, c3_emxArray_char_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_char_T *c3_emxArray;
  int32_T c3_i;
  (void)chartInstance;
  *c3_pEmxArray = (c3_emxArray_char_T *)emlrtMallocMex(sizeof(c3_emxArray_char_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, (void *)c3_sp);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (char_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, (void *)c3_sp);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxFree_char_T(SFc3_untitledInstanceStruct *chartInstance,
  c3_emxArray_char_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_char_T *)NULL) {
    if (((*c3_pEmxArray)->data != (char_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_char_T *)NULL;
  }
}

static void init_dsm_address_info(SFc3_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_untitledInstanceStruct *chartInstance)
{
  chartInstance->c3_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_x2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_y2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_d = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_theta2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3913848362U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2990588188U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2358275888U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2205033855U);
}

mxArray *sf_c3_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_untitled_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("time");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtls1Kw0AQxzelLVZBPei9+ABuP8DqQYyerFgQ8eDBkm6Sbbuw+SDZSL316LGP4NHH8BF8BI8"
    "ePXo0yUZtl2KgXUyVLizLTJnpzH9/OwQozRYI13q4HzcAKIbnSrhzgK9CYivhXk1O7s9/+cvhZn"
    "cujvy+ZzTN8LSRFdsoGDTtrhPn3wff+YtT8itj+UuJn6+3o/nid1QxPj8lvjgWv5nYrI8ZqnF9P"
    "nXKro+tuI9KSh+5iT5yYLAw9Zdnqv9OWv2b6nzx/P/VlPrXBI4im9iEEURdx69+5XkGP783RXhv"
    "uTFOKSDAnVJPMUXPUlJTvF6QGp+qIUWXRbmfWd65hVnfMXn8hZLxvVwP+b3cD1UZ73WYoseZoEd"
    "kw8D3IHUMRGHr+Or8+ARe1iq1mg6Z41DdGUBsUUiJDi3EKNKhh2yzG9jQ9cgtYjj6WYt8u9bicJ"
    "E2d/ITOuSBj7EZ32PWPLyOOA/vIyk8uCk6HAo8HM7Bg2f3YgT+wlwoCH1Hts9CmpP4TtYcDE3OQ"
    "RlL4WCUoseNoMeNxLmgWUavurdfaWixwt2A8kmx5EQCJ08JJ53f4aQt6NGWygmrHhzUG8ibBGXJ"
    "iQROHhJO1H8wT/y+Vzccuyd1npSlcHKaosu2oEtkE19DBiO3WDPqWmAzwig2x76zPwADUftC"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s57fsu7ZvZkkT4CMzWrWYKG";
}

static void sf_opaque_initialize_c3_untitled(void *chartInstanceVar)
{
  initialize_params_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
  initialize_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_untitled(void *chartInstanceVar)
{
  enable_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_untitled(void *chartInstanceVar)
{
  disable_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_untitled(void *chartInstanceVar)
{
  sf_gateway_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_untitled(SimStruct* S)
{
  return get_sim_state_c3_untitled((SFc3_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c3_untitled((SFc3_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c3_untitled(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    mdl_cleanup_runtime_resources_c3_untitled((SFc3_untitledInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c3_untitled(void *chartInstanceVar)
{
  mdl_start_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c3_untitled(void *chartInstanceVar)
{
  mdl_terminate_c3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_untitled((SFc3_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_untitled(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_untitled((SFc3_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc3_untitled((SFc3_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_untitled_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [27] = {
    "eNrtWs9vG0UU3oQ0ohRKDlRckIgQEr8EThMgrdQWJ45dAgmNaictVat0vPvsHXl2Zjsz68QVhxy",
    "RuPRP4Aj/AOf+B3DkyJEjxx55s7t2nY2Jd2xD0tKVnM1495s375vvvXmza2dqfdPB4zx+Ft5znF",
    "k8v4yfaSc5zqTtqb5P8v2McyVtf3fOcVzhQRN4NWo06L5jd/Ao2CKSBMqxPzgJ4CYowSJNBV/nD",
    "ZEfS3kDJHAXOwiF1FZ2FQ0iRnmrEnHXWFa3fOr6VV9EzFvFDol3g7POP9kNI72FFteoBFdXADzt",
    "SxE1/QojzeNZkHqv5IPbUlFgzZUCXY1C46rajJimIYPyPrjrXGmCLKgh/lY10VDS+3YkG39VtYs",
    "WQcgo4fm59omqQojq0LAdevj3RqSRvVxY1ydSr4JP2qA2aCu2Ljjksk4V3l2nnGghKWHlgJVMbz",
    "n93WLo4yaGBLOdI/R3VQJphYJybRkQ1QryXOakzmAN6lHT0m4VHkQmGnYo7IG0m99GSbRBkibc4",
    "HZjjueovB+LshdLObGaBrBD5IqL2lXg2eUNDDpVJShHqGE3VliIKV5XNUnbqA3bXLduwn+kXBcF",
    "ifrVSNjYbrkN1rrq2a24vEQYU3bYmgg3oA0str9GNBkBm9i3ACtFvZpAdZhsY5mxIk4xElJsSXC",
    "P5ldlO4OKF7ZvcJHKAaeBCQPwkObe0HsdDYujSGkRlDDlrG1s5LR3FLvONcgGcSH3GiMJVYADjn",
    "VladejygQSopElHXuZu4ckBkeCOqoR8bU9IVvIse1i9pQrEwl2aPCamJg1xEmujOreISzKOeZAN",
    "TF+UB7bCrOsnV3EmvgZCewS1wfPrJyUwSbmWewg7xQrs+SvoLdtqjtroFxJw7yRFGFCx0XXsFTr",
    "hLDNW1zs8YoUQTWtvI7RFQBmDSI55c1VXMJlp4KDzzdqCQ9qcXa3LXIMz0QzUjfauA4cV0Pjq6k",
    "aiItRVeZYIuOAxsFW6UMsYriiSuNC3UmW+mTdM/V70Xlav88MqN/P9dXvc2nbXdqNOAZQfz8Lff",
    "28mmMfkAfnHME5PVz3/H4ffmqAXafvnLV3dvr4cU7jf1MDeHotY2cmg5tNubryg+j88vijd3/d+",
    "fDazx/cWxjH/u05u33W+bT9Vrde6mXn9pEEZu79cogO3szowLTVZ8sNFS3fad9ptWqfljYf3pK3",
    "vv36etzfT68fP95XMuPtfj9vajQM3jgXSHfdS/drpk2iZB9h+r/UN97ZIXyc7dOT4/z1xXj4d4p",
    "Z/CC+ZjN8mbb2QZPFw/o9OT/eKGb1OMiP6UN+TDv7p2b88yONvzOx8c8Vx8OPnn8px+KFsFCoi7",
    "1+fnPs8sN0n06ZQ51wwHhmh/B5Nh1TfPxBivG56E6El9MyP6PEeQDaF16C35o64Xm5fZDMy/cHx",
    "UnE68EQPr7K8GHahUjJAhMuYYXNldrGymrh5uLC4mK9oIVgdbFfgIAVGK0XkoKmIAn3sNwuhLhX",
    "xmrQXN41330SnB5dDMs7M4d4mHEUgBfP40nr4c9HiR6ePJqIHsIhPFzN6OHqGHqQvBlL4FnIC2c",
    "yfp/p7m1S/P2T1sGBl+hgHiaig0dD+Lib4ePuBPPCbuA2L35+aWF5N2a4EbEkU7zQyQR08jjVyf",
    "3/Rif3Mnzcm6hO9MXLl5eWiTwslBc6mYBOfkx1UnwO8ony5ZIreHOi+WR+IjoZtk+/kOHlQvyuZ",
    "ZeYJ2qwe/jJzfkJPBexxTkvcKcCN/U/9C/Pc8lRcS/9i89BJ4kb1z/b563P+v3H7fOczP1zp9gP",
    "55h8b/Pc/bT59bvlc6+30/a13vvekk+ZN+CNU3p5A0hj0NXnRN9PLPnrvgcoG/7SHwbdWVrhhHU",
    "UTV6Xdb/ekub3Hb1LEoga/B7vJNaTceru7Vrl40tjrEt/A6bs9CQ=",
    ""
  };

  static char newstr [1929] = "";
  newstr[0] = '\0';
  for (i = 0; i < 27; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_untitled(SimStruct *S)
{
  const char* newstr = sf_c3_untitled_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2037353276U));
  ssSetChecksum1(S,(606847158U));
  ssSetChecksum2(S,(1042962127U));
  ssSetChecksum3(S,(811411881U));
}

static void mdlRTW_c3_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c3_untitled(SimStruct *S)
{
  SFc3_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc3_untitledInstanceStruct *)utMalloc(sizeof
    (SFc3_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S) &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_untitled;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c3_untitled;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c3_untitled;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c3_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_untitled;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c3_JITStateAnimation,
    chartInstance->c3_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c3_untitled(chartInstance);
}

void c3_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c3_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
