/* Include files */

#include "untitled_sfun.h"
#include "c2_untitled.h"
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
static emlrtMCInfo c2_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 4,  /* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled:11"                       /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 8,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled:11"                       /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 19,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled:11"                       /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 116,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 114,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 113,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 54,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 273,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 275,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 277,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 278,/* lineNo */
  "rng",                               /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rng.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 29,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 53,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 55,/* lineNo */
  "sprintf",                           /* fcnName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 19,/* lineNo */
  8,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled:11"                       /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 57,/* lineNo */
  5,                                   /* colNo */
  "sprintf",                           /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m"/* pName */
};

static emlrtDCInfo c2_emlrtDCI = { 57, /* lineNo */
  53,                                  /* colNo */
  "sprintf",                           /* fName */
  "/usr/local/MATLAB/R2022b/toolbox/eml/lib/matlab/strfun/sprintf.m",/* pName */
  4                                    /* checkKind */
};

static uint32_T c2_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
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
static void initialize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void initialize_params_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void mdl_start_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void mdl_terminate_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_untitled(SFc2_untitledInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c2_untitled
  (SFc2_untitledInstanceStruct *chartInstance);
static void enable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void disable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void sf_gateway_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void ext_mode_exec_c2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_st);
static void initSimStructsc2_untitled(SFc2_untitledInstanceStruct *chartInstance);
static real_T c2_now(SFc2_untitledInstanceStruct *chartInstance);
static real_T c2_rand(SFc2_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c2_sp);
static real_T c2_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_length_, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_c_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_tmpStr, const char_T *c2_identifier,
  c2_emxArray_char_T *c2_y);
static void c2_d_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_u, const emlrtMsgIdentifier
  *c2_parentId, c2_emxArray_char_T *c2_y);
static real_T c2_e_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_initialpos, const char_T *c2_identifier, boolean_T
  *c2_svPtr);
static real_T c2_f_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr);
static uint32_T c2_g_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_method, const char_T *c2_identifier, boolean_T *c2_svPtr);
static uint32_T c2_h_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr);
static void c2_i_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_d_state, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[625]);
static void c2_j_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[625]);
static void c2_k_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_d_state, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[2]);
static void c2_l_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[2]);
static uint8_T c2_m_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled, const char_T *c2_identifier);
static uint8_T c2_n_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers(SFc2_untitledInstanceStruct
  *chartInstance);
static void c2_chart_data_browse_helper(SFc2_untitledInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static const mxArray *c2_feval(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1, const
  mxArray *c2_input2);
static const mxArray *c2_length(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0);
static void c2_emxEnsureCapacity_char_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_char_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_char_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_char_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_char_T **c2_pEmxArray);
static void init_dsm_address_info(SFc2_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_initialpos_not_empty = false;
  chartInstance->c2_seed_not_empty = false;
  chartInstance->c2_method_not_empty = false;
  chartInstance->c2_state_not_empty = false;
  chartInstance->c2_b_state_not_empty = false;
  chartInstance->c2_c_state_not_empty = false;
  chartInstance->c2_is_active_c2_untitled = 0U;
}

static void initialize_params_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_untitled(SFc2_untitledInstanceStruct *
  chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    36U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 505);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 118, -1,
    132);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 161, 183, -1,
                    226, false);
}

static void mdl_cleanup_runtime_resources_c2_untitled
  (SFc2_untitledInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  static char_T c2_cv[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c2_cv1[7] = { 'i', 'n', 'i', 't', ' ', '=', ' ' };

  static char_T c2_formatSpec[2] = { '%', 'f' };

  time_t c2_b_eTime;
  time_t c2_eTime;
  c2_emxArray_char_T *c2_b_u;
  c2_emxArray_char_T *c2_charStr;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_tmpStr = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_d;
  real_T c2_b_mti;
  real_T c2_b_theta1;
  real_T c2_b_varargin_1;
  real_T c2_b_x;
  real_T c2_b_x1;
  real_T c2_c_varargin_1;
  real_T c2_c_x;
  real_T c2_d1;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_s;
  real_T c2_s0;
  real_T c2_strSize;
  real_T c2_x;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_loop_ub;
  int32_T c2_mti;
  int32_T c2_prevEpochTime;
  int32_T c2_t;
  uint32_T c2_arg3;
  uint32_T c2_b_seed;
  uint32_T c2_r;
  uint32_T c2_u;
  uint32_T c2_u1;
  uint32_T c2_varargin_1;
  boolean_T c2_b_rEQ0;
  boolean_T c2_covSaturation;
  boolean_T c2_rEQ0;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 3; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (*chartInstance->c2_d)
                      [c2_i]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_st.site = &c2_emlrtRSI;
  if (!chartInstance->c2_seed_not_empty) {
    chartInstance->c2_seed = 0U;
    chartInstance->c2_seed_not_empty = true;
  }

  c2_c_st.site = &c2_g_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_c_st.site = &c2_f_emlrtRSI;
  c2_d_st.site = &c2_h_emlrtRSI;
  c2_x = c2_now(chartInstance) * 8.64E+6;
  c2_b_x = c2_x;
  c2_b_x = muDoubleScalarFloor(c2_b_x);
  c2_c_x = c2_b_x;
  c2_a = c2_c_x;
  c2_d_x = c2_a;
  c2_e_x = c2_d_x;
  if (c2_e_x == 0.0) {
    c2_s = 0.0;
  } else {
    c2_s = muDoubleScalarRem(c2_e_x, 2.147483647E+9);
    c2_rEQ0 = (c2_s == 0.0);
    if (c2_rEQ0) {
      c2_s = 0.0;
    } else if (c2_e_x < 0.0) {
      c2_s += 2.147483647E+9;
    }
  }

  c2_d_st.site = &c2_i_emlrtRSI;
  c2_eTime = time(NULL);
  c2_prevEpochTime = (int32_T)c2_eTime + 1;
  do {
    c2_exitg1 = 0;
    c2_d_st.site = &c2_j_emlrtRSI;
    c2_b_eTime = time(NULL);
    c2_t = (int32_T)c2_b_eTime;
    if (c2_t <= c2_prevEpochTime) {
      c2_d_st.site = &c2_k_emlrtRSI;
      c2_f_x = c2_now(chartInstance) * 8.64E+6;
      c2_g_x = c2_f_x;
      c2_g_x = muDoubleScalarFloor(c2_g_x);
      c2_h_x = c2_g_x;
      c2_b_a = c2_h_x;
      c2_i_x = c2_b_a;
      c2_j_x = c2_i_x;
      if (c2_j_x == 0.0) {
        c2_s0 = 0.0;
      } else {
        c2_s0 = muDoubleScalarRem(c2_j_x, 2.147483647E+9);
        c2_b_rEQ0 = (c2_s0 == 0.0);
        if (c2_b_rEQ0) {
          c2_s0 = 0.0;
        } else if (c2_j_x < 0.0) {
          c2_s0 += 2.147483647E+9;
        }
      }

      if (c2_s != c2_s0) {
        c2_exitg1 = 1;
      }
    } else {
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  c2_b_d = muDoubleScalarRound(c2_s);
  c2_covSaturation = false;
  if (c2_b_d < 4.294967296E+9) {
    if (c2_b_d >= 0.0) {
      c2_u = (uint32_T)c2_b_d;
    } else {
      c2_covSaturation = true;
      c2_u = 0U;
    }
  } else if (c2_b_d >= 4.294967296E+9) {
    c2_covSaturation = true;
    c2_u = MAX_uint32_T;
  } else {
    c2_u = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
    c2_covSaturation);
  chartInstance->c2_seed = c2_u;
  c2_c_st.site = &c2_e_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_c_st.site = &c2_d_emlrtRSI;
  c2_varargin_1 = chartInstance->c2_seed;
  if (!chartInstance->c2_state_not_empty) {
    for (c2_i1 = 0; c2_i1 < 625; c2_i1++) {
      chartInstance->c2_state[c2_i1] = c2_uv[c2_i1];
    }

    chartInstance->c2_state_not_empty = true;
  }

  c2_arg3 = c2_varargin_1;
  c2_b_seed = c2_arg3;
  c2_r = c2_b_seed;
  chartInstance->c2_state[0] = c2_b_seed;
  for (c2_mti = 0; c2_mti < 623; c2_mti++) {
    c2_b_mti = (real_T)c2_mti + 2.0;
    c2_d1 = muDoubleScalarRound(c2_b_mti - 1.0);
    if (c2_d1 < 4.294967296E+9) {
      if (c2_d1 >= 0.0) {
        c2_u1 = (uint32_T)c2_d1;
      } else {
        c2_u1 = 0U;
      }
    } else if (c2_d1 >= 4.294967296E+9) {
      c2_u1 = MAX_uint32_T;
    } else {
      c2_u1 = 0U;
    }

    c2_r = (c2_r ^ c2_r >> 30U) * 1812433253U + c2_u1;
    chartInstance->c2_state[(int32_T)c2_b_mti - 1] = c2_r;
  }

  chartInstance->c2_state[624] = 624U;
  if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0,
                     !chartInstance->c2_initialpos_not_empty)) {
    c2_b_st.site = &c2_b_emlrtRSI;
    chartInstance->c2_initialpos = c2_rand(chartInstance, &c2_b_st) * 0.3 + 0.85;
    chartInstance->c2_initialpos_not_empty = true;
  }

  c2_b_x1 = (*chartInstance->c2_d)[0] - chartInstance->c2_initialpos;
  c2_b_theta1 = (*chartInstance->c2_d)[2];
  c2_emxInit_char_T(chartInstance, &c2_st, &c2_charStr, 2, &c2_b_emlrtRTEI);
  c2_b_st.site = &c2_c_emlrtRSI;
  c2_b_varargin_1 = chartInstance->c2_initialpos;
  c2_c_st.site = &c2_p_emlrtRSI;
  c2_c_varargin_1 = c2_b_varargin_1;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 7), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_formatSpec, 10, 0U, 1U, 0U, 2, 1,
    2), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_c_varargin_1, 0, 0U, 0U, 0U, 0),
                false);
  c2_d_st.site = &c2_q_emlrtRSI;
  sf_mex_assign(&c2_tmpStr, c2_feval(chartInstance, &c2_d_st, c2_y, c2_b_y,
    c2_c_y), false);
  c2_d_st.site = &c2_r_emlrtRSI;
  c2_strSize = c2_emlrt_marshallIn(chartInstance, c2_length(chartInstance,
    &c2_d_st, sf_mex_dup(c2_tmpStr)), "<output of length>");
  if (!(c2_strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_strSize, &c2_emlrtDCI, &c2_c_st);
  }

  c2_c_emlrt_marshallIn(chartInstance, &c2_c_st, sf_mex_dup(c2_tmpStr), "tmpStr",
                        c2_charStr);
  sf_mex_destroy(&c2_tmpStr);
  c2_emxInit_char_T(chartInstance, &c2_st, &c2_b_u, 2, &c2_emlrtRTEI);
  c2_i2 = c2_b_u->size[0] * c2_b_u->size[1];
  c2_b_u->size[0] = 1;
  c2_b_u->size[1] = 7 + c2_charStr->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_st, c2_b_u, c2_i2,
    &c2_emlrtRTEI);
  for (c2_i3 = 0; c2_i3 < 7; c2_i3++) {
    c2_b_u->data[c2_i3] = c2_cv1[c2_i3];
  }

  c2_loop_ub = c2_charStr->size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
    c2_b_u->data[c2_i4 + 7] = c2_charStr->data[c2_i4];
  }

  c2_emxFree_char_T(chartInstance, &c2_charStr);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_u->data, 10, 0U, 1U, 0U, 2,
    c2_b_u->size[0], c2_b_u->size[1]), false);
  c2_emxFree_char_T(chartInstance, &c2_b_u);
  sf_mex_call(&c2_st, NULL, "disp", 0U, 1U, 14, c2_d_y);
  *chartInstance->c2_x1 = c2_b_x1;
  *chartInstance->c2_y1 = 0.0;
  *chartInstance->c2_theta1 = c2_b_theta1;
  c2_do_animation_call_c2_untitled(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_x1);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, *chartInstance->c2_y1);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U,
                    *chartInstance->c2_theta1);
}

static void ext_mode_exec_c2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_untitled(SFc2_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(10, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_theta1, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_x1, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_y1, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  if (!chartInstance->c2_initialpos_not_empty) {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_e_y, sf_mex_create("y", &chartInstance->c2_initialpos, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_f_y, sf_mex_create("y", &chartInstance->c2_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_g_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_g_y, sf_mex_create("y", &chartInstance->c2_seed, 7, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_h_y = NULL;
  if (!chartInstance->c2_method_not_empty) {
    sf_mex_assign(&c2_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_h_y, sf_mex_create("y", &chartInstance->c2_c_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 6, c2_h_y);
  c2_i_y = NULL;
  if (!chartInstance->c2_state_not_empty) {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", chartInstance->c2_state, 7, 0U, 1U,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_j_y = NULL;
  if (!chartInstance->c2_b_state_not_empty) {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_j_y, sf_mex_create("y", chartInstance->c2_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c2_y, 8, c2_j_y);
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_untitled, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 9, c2_k_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_untitled(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  int32_T c2_i1;
  uint32_T c2_b_uv[625];
  uint32_T c2_uv1[2];
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_theta1 = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "theta1");
  *chartInstance->c2_x1 = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "x1");
  *chartInstance->c2_y1 = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "y1");
  chartInstance->c2_initialpos = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "initialpos",
    &chartInstance->c2_initialpos_not_empty);
  chartInstance->c2_method = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 4)), "method", &chartInstance->c2_method_not_empty);
  chartInstance->c2_seed = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 5)), "seed", &chartInstance->c2_seed_not_empty);
  chartInstance->c2_c_state = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 6)), "state", &chartInstance->c2_c_state_not_empty);
  c2_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 7)),
                        "state", &chartInstance->c2_state_not_empty, c2_b_uv);
  for (c2_i = 0; c2_i < 625; c2_i++) {
    chartInstance->c2_state[c2_i] = c2_b_uv[c2_i];
  }

  c2_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 8)),
                        "state", &chartInstance->c2_b_state_not_empty, c2_uv1);
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    chartInstance->c2_b_state[c2_i1] = c2_uv1[c2_i1];
  }

  chartInstance->c2_is_active_c2_untitled = c2_m_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 9)), "is_active_c2_untitled");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_untitled(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c2_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_now(SFc2_untitledInstanceStruct *chartInstance)
{
  time_t c2_rawtime;
  c2_sxaDueAh1f53T9ESYg9Uc4E c2_timeinfoDouble;
  struct tm c2_timeinfo;
  real_T c2_cDaysMonthWise[12];
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_b_r;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_r;
  real_T c2_c_x;
  real_T c2_dDateNum;
  real_T c2_d_x;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_r;
  real_T c2_x;
  boolean_T c2_b_rEQ0;
  boolean_T c2_c_rEQ0;
  boolean_T c2_guard1 = false;
  boolean_T c2_rEQ0;
  (void)chartInstance;
  c2_cDaysMonthWise[0] = 0.0;
  c2_cDaysMonthWise[1] = 31.0;
  c2_cDaysMonthWise[2] = 59.0;
  c2_cDaysMonthWise[3] = 90.0;
  c2_cDaysMonthWise[4] = 120.0;
  c2_cDaysMonthWise[5] = 151.0;
  c2_cDaysMonthWise[6] = 181.0;
  c2_cDaysMonthWise[7] = 212.0;
  c2_cDaysMonthWise[8] = 243.0;
  c2_cDaysMonthWise[9] = 273.0;
  c2_cDaysMonthWise[10] = 304.0;
  c2_cDaysMonthWise[11] = 334.0;
  time(&c2_rawtime);
  c2_timeinfo = *localtime(&c2_rawtime);
  c2_timeinfo.tm_year += 1900;
  c2_timeinfo.tm_mon++;
  c2_timeinfoDouble.tm_min = (real_T)c2_timeinfo.tm_min;
  c2_timeinfoDouble.tm_sec = (real_T)c2_timeinfo.tm_sec;
  c2_timeinfoDouble.tm_hour = (real_T)c2_timeinfo.tm_hour;
  c2_timeinfoDouble.tm_mday = (real_T)c2_timeinfo.tm_mday;
  c2_timeinfoDouble.tm_mon = (real_T)c2_timeinfo.tm_mon;
  c2_timeinfoDouble.tm_year = (real_T)c2_timeinfo.tm_year;
  c2_x = c2_timeinfoDouble.tm_year / 4.0;
  c2_b_x = c2_x;
  c2_b_x = muDoubleScalarCeil(c2_b_x);
  c2_c_x = c2_timeinfoDouble.tm_year / 100.0;
  c2_d_x = c2_c_x;
  c2_d_x = muDoubleScalarCeil(c2_d_x);
  c2_e_x = c2_timeinfoDouble.tm_year / 400.0;
  c2_f_x = c2_e_x;
  c2_f_x = muDoubleScalarCeil(c2_f_x);
  c2_dDateNum = ((((365.0 * c2_timeinfoDouble.tm_year + c2_b_x) - c2_d_x) +
                  c2_f_x) + c2_cDaysMonthWise[(int32_T)c2_timeinfoDouble.tm_mon
                 - 1]) + c2_timeinfoDouble.tm_mday;
  if (c2_timeinfoDouble.tm_mon > 2.0) {
    c2_g_x = c2_timeinfoDouble.tm_year;
    c2_a = c2_g_x;
    c2_h_x = c2_a;
    c2_i_x = c2_h_x;
    if (c2_i_x == 0.0) {
      c2_r = 0.0;
    } else {
      c2_r = muDoubleScalarRem(c2_i_x, 4.0);
      c2_rEQ0 = (c2_r == 0.0);
      if (c2_rEQ0) {
        c2_r = 0.0;
      } else if (c2_i_x < 0.0) {
        c2_r += 4.0;
      }
    }

    c2_guard1 = false;
    if (c2_r == 0.0) {
      c2_j_x = c2_timeinfoDouble.tm_year;
      c2_b_a = c2_j_x;
      c2_k_x = c2_b_a;
      c2_m_x = c2_k_x;
      if (c2_m_x == 0.0) {
        c2_b_r = 0.0;
      } else {
        c2_b_r = muDoubleScalarRem(c2_m_x, 100.0);
        c2_b_rEQ0 = (c2_b_r == 0.0);
        if (c2_b_rEQ0) {
          c2_b_r = 0.0;
        } else if (c2_m_x < 0.0) {
          c2_b_r += 100.0;
        }
      }

      if (c2_b_r != 0.0) {
        c2_dDateNum++;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_l_x = c2_timeinfoDouble.tm_year;
      c2_c_a = c2_l_x;
      c2_n_x = c2_c_a;
      c2_o_x = c2_n_x;
      if (c2_o_x == 0.0) {
        c2_c_r = 0.0;
      } else {
        c2_c_r = muDoubleScalarRem(c2_o_x, 400.0);
        c2_c_rEQ0 = (c2_c_r == 0.0);
        if (c2_c_rEQ0) {
          c2_c_r = 0.0;
        } else if (c2_o_x < 0.0) {
          c2_c_r += 400.0;
        }
      }

      if (c2_c_r == 0.0) {
        c2_dDateNum++;
      }
    }
  }

  c2_dDateNum += ((c2_timeinfoDouble.tm_hour * 3600.0 + c2_timeinfoDouble.tm_min
                   * 60.0) + c2_timeinfoDouble.tm_sec) / 86400.0;
  return c2_dDateNum;
}

static real_T c2_rand(SFc2_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c2_sp)
{
  static char_T c2_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_b_d;
  real_T c2_b_j;
  real_T c2_b_r;
  real_T c2_c_kk;
  int32_T c2_a;
  int32_T c2_b_kk;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_kk;
  uint32_T c2_u[2];
  uint32_T c2_b_y;
  uint32_T c2_c_y;
  uint32_T c2_d_y;
  uint32_T c2_e_y;
  uint32_T c2_f_y;
  uint32_T c2_g_y;
  uint32_T c2_mti;
  uint32_T c2_y;
  boolean_T c2_b_isvalid;
  boolean_T c2_exitg2;
  boolean_T c2_isvalid;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_l_emlrtRSI;
  if (!chartInstance->c2_method_not_empty) {
    chartInstance->c2_method = 7U;
    chartInstance->c2_method_not_empty = true;
  }

  c2_b_st.site = &c2_m_emlrtRSI;
  if (!chartInstance->c2_state_not_empty) {
    for (c2_i = 0; c2_i < 625; c2_i++) {
      chartInstance->c2_state[c2_i] = c2_uv[c2_i];
    }

    chartInstance->c2_state_not_empty = true;
  }

  c2_c_st.site = &c2_n_emlrtRSI;
  c2_d_st.site = &c2_o_emlrtRSI;

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
    c2_exitg1 = 0;
    for (c2_j = 0; c2_j < 2; c2_j++) {
      c2_b_j = (real_T)c2_j + 1.0;
      c2_mti = chartInstance->c2_state[624] + 1U;
      if ((real_T)c2_mti >= 625.0) {
        for (c2_kk = 0; c2_kk < 227; c2_kk++) {
          c2_c_kk = (real_T)c2_kk + 1.0;
          c2_y = (chartInstance->c2_state[(int32_T)c2_c_kk - 1] & 2147483648U) |
            (chartInstance->c2_state[(int32_T)(c2_c_kk + 1.0) - 1] & 2147483647U);
          c2_b_y = c2_y;
          c2_d_y = c2_b_y;
          if ((c2_d_y & 1U) == 0U) {
            c2_d_y >>= 1U;
          } else {
            c2_d_y = c2_d_y >> 1U ^ 2567483615U;
          }

          chartInstance->c2_state[(int32_T)c2_c_kk - 1] =
            chartInstance->c2_state[(int32_T)(c2_c_kk + 397.0) - 1] ^ c2_d_y;
        }

        for (c2_b_kk = 0; c2_b_kk < 396; c2_b_kk++) {
          c2_c_kk = (real_T)c2_b_kk + 228.0;
          c2_y = (chartInstance->c2_state[(int32_T)c2_c_kk - 1] & 2147483648U) |
            (chartInstance->c2_state[(int32_T)(c2_c_kk + 1.0) - 1] & 2147483647U);
          c2_f_y = c2_y;
          c2_g_y = c2_f_y;
          if ((c2_g_y & 1U) == 0U) {
            c2_g_y >>= 1U;
          } else {
            c2_g_y = c2_g_y >> 1U ^ 2567483615U;
          }

          chartInstance->c2_state[(int32_T)c2_c_kk - 1] =
            chartInstance->c2_state[(int32_T)((c2_c_kk + 1.0) - 228.0) - 1] ^
            c2_g_y;
        }

        c2_y = (chartInstance->c2_state[623] & 2147483648U) |
          (chartInstance->c2_state[0] & 2147483647U);
        c2_c_y = c2_y;
        c2_e_y = c2_c_y;
        if ((c2_e_y & 1U) == 0U) {
          c2_e_y >>= 1U;
        } else {
          c2_e_y = c2_e_y >> 1U ^ 2567483615U;
        }

        chartInstance->c2_state[623] = chartInstance->c2_state[396] ^ c2_e_y;
        c2_mti = 1U;
      }

      c2_y = chartInstance->c2_state[(int32_T)c2_mti - 1];
      chartInstance->c2_state[624] = c2_mti;
      c2_y ^= c2_y >> 11U;
      c2_y ^= c2_y << 7U & 2636928640U;
      c2_y ^= c2_y << 15U & 4022730752U;
      c2_y ^= c2_y >> 18U;
      c2_u[(int32_T)c2_b_j - 1] = c2_y;
    }

    c2_u[0] >>= 5U;
    c2_u[1] >>= 6U;
    c2_b_r = 1.1102230246251565E-16 * ((real_T)c2_u[0] * 6.7108864E+7 + (real_T)
      c2_u[1]);
    if (c2_b_r == 0.0) {
      if (((real_T)chartInstance->c2_state[624] >= 1.0) && ((real_T)
           chartInstance->c2_state[624] < 625.0)) {
        c2_isvalid = true;
      } else {
        c2_isvalid = false;
      }

      c2_b_isvalid = c2_isvalid;
      if (c2_isvalid) {
        c2_b_isvalid = false;
        c2_k = 0;
        c2_exitg2 = false;
        while ((!c2_exitg2) && (c2_k + 1 < 625)) {
          if ((real_T)chartInstance->c2_state[c2_k] == 0.0) {
            c2_a = c2_k + 1;
            c2_k = c2_a;
          } else {
            c2_b_isvalid = true;
            c2_exitg2 = true;
          }
        }
      }

      if (!c2_b_isvalid) {
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        sf_mex_call(&c2_d_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                    sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
      }
    } else {
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  c2_b_d = c2_b_r;
  return c2_b_d;
}

static real_T c2_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_length_, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_a__output_of_length_),
    &c2_thisId);
  sf_mex_destroy(&c2_a__output_of_length_);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_b_d;
  real_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_b_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_c_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_tmpStr, const char_T *c2_identifier,
  c2_emxArray_char_T *c2_y)
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, c2_sp, sf_mex_dup(c2_tmpStr), &c2_thisId,
                        c2_y);
  sf_mex_destroy(&c2_tmpStr);
}

static void c2_d_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_u, const emlrtMsgIdentifier
  *c2_parentId, c2_emxArray_char_T *c2_y)
{
  static boolean_T c2_bv1[2] = { false, true };

  c2_emxArray_char_T *c2_r;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_loop_ub;
  uint32_T c2_b_uv[2];
  boolean_T c2_bv[2];
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_r, 2, (emlrtRTEInfo *)NULL);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_b_uv[c2_i] = 1U + 4294967294U * (uint32_T)c2_i;
  }

  c2_i1 = c2_r->size[0] * c2_r->size[1];
  c2_r->size[0] = sf_mex_get_dimension(c2_u, 0);
  c2_r->size[1] = sf_mex_get_dimension(c2_u, 1);
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_r, c2_i1, (emlrtRTEInfo *)
    NULL);
  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_bv[c2_i2] = c2_bv1[c2_i2];
  }

  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_u), c2_r->data, 0, 10, 0U, 1, 0U,
                   2, c2_bv, c2_b_uv, c2_r->size);
  c2_i3 = c2_y->size[0] * c2_y->size[1];
  c2_y->size[0] = 1;
  c2_y->size[1] = c2_r->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_y, c2_i3, (emlrtRTEInfo *)
    NULL);
  c2_loop_ub = c2_r->size[0] * c2_r->size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
    c2_y->data[c2_i4] = c2_r->data[c2_i4];
  }

  sf_mex_destroy(&c2_u);
  c2_emxFree_char_T(chartInstance, &c2_r);
}

static real_T c2_e_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_initialpos, const char_T *c2_identifier, boolean_T
  *c2_svPtr)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_initialpos),
    &c2_thisId, c2_svPtr);
  sf_mex_destroy(&c2_b_initialpos);
  return c2_y;
}

static real_T c2_f_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr)
{
  real_T c2_b_d;
  real_T c2_y;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_d, 1, 0, 0U, 0, 0U, 0);
    c2_y = c2_b_d;
  }

  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint32_T c2_g_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_method, const char_T *c2_identifier, boolean_T *c2_svPtr)
{
  emlrtMsgIdentifier c2_thisId;
  uint32_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_method),
    &c2_thisId, c2_svPtr);
  sf_mex_destroy(&c2_b_method);
  return c2_y;
}

static uint32_T c2_h_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr)
{
  uint32_T c2_b_u;
  uint32_T c2_y;
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 7, 0U, 0, 0U, 0);
    c2_y = c2_b_u;
  }

  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_i_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_d_state, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[625])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_d_state), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_d_state);
}

static void c2_j_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[625])
{
  int32_T c2_i;
  uint32_T c2_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c2_i = 0; c2_i < 625; c2_i++) {
      c2_y[c2_i] = c2_b_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static void c2_k_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_d_state, const char_T *c2_identifier, boolean_T *c2_svPtr,
  uint32_T c2_y[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_d_state), &c2_thisId,
                        c2_svPtr, c2_y);
  sf_mex_destroy(&c2_d_state);
}

static void c2_l_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, boolean_T
  *c2_svPtr, uint32_T c2_y[2])
{
  int32_T c2_i;
  uint32_T c2_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c2_u)) {
    *c2_svPtr = false;
  } else {
    *c2_svPtr = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_b_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c2_i = 0; c2_i < 2; c2_i++) {
      c2_y[c2_i] = c2_b_uv[c2_i];
    }
  }

  sf_mex_destroy(&c2_u);
}

static uint8_T c2_m_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_untitled), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_untitled);
  return c2_y;
}

static uint8_T c2_n_emlrt_marshallIn(SFc2_untitledInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_slStringInitializeDynamicBuffers(SFc2_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper(SFc2_untitledInstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_b_d;
  real_T c2_d1;
  real_T c2_d2;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 5U:
    c2_b_d = *chartInstance->c2_x1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_b_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c2_d1 = *chartInstance->c2_y1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_d, 0, 0U,
      1U, 0U, 1, 3), false);
    break;

   case 9U:
    c2_d2 = *chartInstance->c2_theta1;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c2_feval(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1, const
  mxArray *c2_input2)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 3U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1), 14, sf_mex_dup(c2_input2)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  sf_mex_destroy(&c2_input2);
  return c2_m;
}

static const mxArray *c2_length(SFc2_untitledInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "length", 1U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static void c2_emxEnsureCapacity_char_T(SFc2_untitledInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_char_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(char_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(char_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (char_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_char_T(SFc2_untitledInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_char_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_char_T *)emlrtMallocMex(sizeof(c2_emxArray_char_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (char_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_char_T(SFc2_untitledInstanceStruct *chartInstance,
  c2_emxArray_char_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_char_T *)NULL) {
    if (((*c2_pEmxArray)->data != (char_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_char_T *)NULL;
  }
}

static void init_dsm_address_info(SFc2_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_untitledInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_x1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_y1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_d = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_theta1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4031199725U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3696839297U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(798380307U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2688510997U);
}

mxArray *sf_c2_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_untitled_jit_fallback_info(void)
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

mxArray *sf_c2_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtls1OwkAQx7cEiXBQD3onPoALmCgcjMWTGEmM8eABUrftAptsP9JuCdx69MgjePQxfAQfw6N"
    "Hj7bdKrAhNpGNoHGTzWaGzDDz399OCpRWG0RrK9qP2wAUonMz2jnA10ZqK9EupSf35z/95WizsY"
    "tjv+8ZLTM6bWQlNgpGLbvnJPnrYJq/sCC/MpO/mPr5ej1dLn5fFePzC+ILM/E7qc0GmKEq1+dDp"
    "9X1sZv0UcnoIzfXRw6M1qb+8rfqH0urf0ddLp7/v5pRf0ngKLaJTRhB1HX8aZ5n8PV7U4T3lpvh"
    "lAIC3AX1FDL0LKY1JUvV1eQMDSm6rMv9fOedW5gNHJPHXykrvpfbkN/LfajKeK9hhh4Xgh6xDQP"
    "fg9QxEIXt5s1l8wxe1yq1mg6Z41DdGUFsUUiJDi3EKNKhh2yzF9jQ9cgQMRz/rMW+A2t9uMiaO/"
    "k5HfLAx9hM7nHVPLxMOA9vEyk8uBk6nAg8nCzBg2f3EwR+w1zYEPqObZ9FNKfxd6vmIDQ5B2Ush"
    "YNJhh4dQY+OxLmgWUa/elSvHGuJwr2A8knxz4kETp5STu5+hpOuoEdXKies2mgcHiNvHpR/TiRw"
    "8pByov6BeeIPvEPDsftS50lZCifnGbrsCbrENvE1ZDAyxJpR0wKbEUaxOfOd/Q4K1vqs"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s2Z7GOfWVlButVqSQtpw6EH";
}

static void sf_opaque_initialize_c2_untitled(void *chartInstanceVar)
{
  initialize_params_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
  initialize_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_untitled(void *chartInstanceVar)
{
  enable_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_untitled(void *chartInstanceVar)
{
  disable_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_untitled(void *chartInstanceVar)
{
  sf_gateway_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_untitled(SimStruct* S)
{
  return get_sim_state_c2_untitled((SFc2_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_untitled((SFc2_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_untitled(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_untitled((SFc2_untitledInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_untitled(void *chartInstanceVar)
{
  mdl_start_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_untitled(void *chartInstanceVar)
{
  mdl_terminate_c2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_untitled((SFc2_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_untitled(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_untitled((SFc2_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_untitled((SFc2_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_untitled_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [27] = {
    "eNrtWs9vG0UU3oQ0oi2UHKi4gIiQEFzASSr1h0TBiWO3RgkJtZNWVat0vPvsHXl2Zjsz68SIQy5",
    "IcOufgAQHDty58icgTvwJiBMXpB55s7t2na2Jd2xD0tKVnM1495s375vvvXk7a2emuungcQE/S+",
    "85zjyeX8bPrJMcZ9L2zMAn+X7O+Shtf3necVzhQQt4LWo26YFjd/Ao2CaSBMqxPzgJ4BYowSJNB",
    "a/ypsiPpbwJEriLHYRCaiu7igYRo7xdibhrLKvbPnX9mi8i5q1hh8Tb4qz7T3bDSG+jxXUqwdUV",
    "AE/7UkQtv8JI63gWpN4v+eC2VRRYc6VA16LQuKo2I6ZpyKB8AG6VK02QBTXC35omGkr6wI5k46+",
    "q9dAiCBklPD/XPlE1CFEdGnZCD/9uRRrZy4V1fSL1GvikA2qDtmPrgkMu61Th3Q3KiRaSElYOWM",
    "n0ltPfbYY+bmJIMNs5Qn/XJJB2KCjXlgFRqyDPZU4aDNahEbUs7dbgYWSiYZfCPki7+W2WRAcka",
    "cEWtxtzPEflg1iU/VjKidU0gF0iV13UrgLPLm9g0KkaQTlCHbuxwkJMcVXVJe2gNmxzXdWE/1i5",
    "LgoS9auxsLHdcgesddW3W3F5iTCm7LB1EW5AB1hsf51oMgY2sW8BVop6dYHqMNnGMmNFnGIkpNi",
    "S4B7Nr8pOBhUvbJ/hIpUDTgMTBuAhzf2h9zsaFUeR0iIoYcpZ39jIae9pbJVrkE3iQu41RhKqAA",
    "cc68rSrkeVCSREI0s69jJ3D0kMjgV1VDPi6/tCtpFj28XsCVcmEuzQ4LUwMWuIk1wZ1b1LWJRzz",
    "IFqYfygPHYUZlk7u4g18TMW2CWuD55ZOSmDTcyz2EHeKVZmyV9FbztUd9dBuZKGeSMpwoSOi65h",
    "qd4NYYe3udjnFSmCWlp5HaMrAMwaRHLKW2u4hMtuBQefb9QSHtbj7G5b5BieiWakYbRxAziuhsZ",
    "XUzUQF6OqzLFExgFNgq3RL7CI4YoqjQt1N1nqk3XP1O9F50n9Pjekfj8/UL8vpG13ZS/iGECD/S",
    "wN9PNKjueAPDjnKZzTx/XO7w/gZ4bYdQbOWXtnZ48f5yz+NzOEp1czduYyuPmUK3Xnr9KPv777/",
    "Vvf/XGt/dNX30xi/86C3XPWhbT9Zq9e6mfnzlMJzNx7c4QO3sjowLTVyt0rN7aat3fZWqR3H9Y+",
    "1+H+5fLNuL8fXjt+vOcy4+19v2hqNAzeOBdIt+qlz2umTaLkOcL0f3VgvPMj+Dg7oCfH+fOTyfD",
    "vFLP4YXzNZ/gybe2DJstH9XtyfrxezOpxmB+zR/yYdQ5OzfgXxxp/d2rjXyhOhs+Xf89ldHQu3g",
    "vA4oWwUKgn/fzi2OWH2QGdMoc64ZDxzI/g82w6pvgoNorx+dCdCi+nZX7GifMAtC+8BL89c8Lzc",
    "ucwmZevD4vTiNfDEXx8muHDtAuRkgUmXMIKm6v1jdW1wq2VpZWVRkELwRrioAABKzDaKCQFTUES",
    "7mG5XQjxWRmrQXN5z3z3YXB6dDEq78wd4WHOUQBePI8nrYffHyV6ePxoKnoIR/BwPaOH6xPoQfJ",
    "WLIFnIS+cyfh9pvdsk+IfnLQODr1EB4swFR08GsHHvQwf96aYF/YCt7V8+erSlb2Y4WbEkkzxQi",
    "dT0MnPqU4e/Dc6uZ/h4/5UdaKXr127dIXIo0J5oZMp6OTbVCfF5yCfKF9ecgVvTTWfLE5FJ6Oe0",
    "y9meLkYv2vZI2ZHDfaO7txcmMK+iC3OeYE7FbiZ/6F/efYlx8W99C/ug04TN6l/tvutz/r9xz3n",
    "OZn7F06xH84x+d5m3/20+fWb5b7X22n74/773pJPmTfkjVN6eQNIc9jV50Tfjy35670HKBv+0h8",
    "G3b20ygnrKprsR/a+3pbm9x39SxKIGv4e7yTWk0nq7p165YOrE6xLfwOnVPWI",
    ""
  };

  static char newstr [1937] = "";
  newstr[0] = '\0';
  for (i = 0; i < 27; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_untitled(SimStruct *S)
{
  const char* newstr = sf_c2_untitled_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1140152435U));
  ssSetChecksum1(S,(2753942188U));
  ssSetChecksum2(S,(971678493U));
  ssSetChecksum3(S,(2307241835U));
}

static void mdlRTW_c2_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_untitled(SimStruct *S)
{
  SFc2_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc2_untitledInstanceStruct *)utMalloc(sizeof
    (SFc2_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S) &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_untitled;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_untitled;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_untitled;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_untitled;
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
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_untitled(chartInstance);
}

void c2_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
