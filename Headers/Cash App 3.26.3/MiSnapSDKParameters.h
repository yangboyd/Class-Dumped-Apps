//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIColor;

@interface MiSnapSDKParameters : NSObject
{
    _Bool _shouldDismissOnSuccess;
    _Bool _seamlessFailover;
    _Bool _showDebugRectangle;
    float _imageQuality;
    float _minCornerConfidence;
    float _minGlareConfidence;
    float _minContrastConfidence;
    float _minBackgroundConfidence;
    float _minMICRConfidence;
    float _minBrightness;
    float _maxBrightness;
    float _minSharpness;
    float _minPadding;
    float _skewAngle;
    float _rotationAngle;
    long long _captureMode;
    long long _orientationMode;
    long long _minLandscapeHorizontalFill;
    long long _minPortraitHorizontalFill;
    long long _timeout;
    long long _maxCaptures;
    long long _torchMode;
    long long _geoRegion;
    NSString *_documentType;
    NSString *_shortDescription;
    NSString *_applicationVersion;
    NSString *_serverVersion;
    NSString *_serverType;
    double _animationRectangleStrokeWidth;
    double _animationRectangleCornerRadius;
    UIColor *_animationRectangleColor;
    NSString *_languageOverride;
    long long _smartHintUpdatePeriod;
    long long _terminationDelay;
    NSMutableDictionary *_paramsDictionary;
    NSString *_injectImageName;
    NSString *_colorHexString;
}

+ (id)defaultParametersForCreditCard;
+ (id)defaultParametersForBarcode;
+ (id)defaultParametersForLandscapeDocument;
+ (id)defaultParametersForIdCardBack;
+ (id)defaultParametersForIdCardFront;
+ (id)defaultParametersForDriversLicense;
+ (id)defaultParametersForPassport;
+ (id)defaultParametersForW2;
+ (id)defaultParametersForBalanceTransfer;
+ (id)defaultParametersForRemittance;
+ (id)defaultParametersForCheckBack;
+ (id)defaultParametersForCheckFront;
+ (id)defaultParametersForACH;
+ (id)defaultParameters;
+ (id)colorWithHexString:(id)arg1;
@property(retain, nonatomic) NSString *colorHexString; // @synthesize colorHexString=_colorHexString;
@property(nonatomic) _Bool showDebugRectangle; // @synthesize showDebugRectangle=_showDebugRectangle;
@property(retain, nonatomic) NSString *injectImageName; // @synthesize injectImageName=_injectImageName;
@property(retain, nonatomic) NSMutableDictionary *paramsDictionary; // @synthesize paramsDictionary=_paramsDictionary;
@property(readonly, nonatomic) long long terminationDelay; // @synthesize terminationDelay=_terminationDelay;
@property(readonly, nonatomic) long long smartHintUpdatePeriod; // @synthesize smartHintUpdatePeriod=_smartHintUpdatePeriod;
@property(retain, nonatomic) NSString *languageOverride; // @synthesize languageOverride=_languageOverride;
@property(nonatomic) _Bool seamlessFailover; // @synthesize seamlessFailover=_seamlessFailover;
@property(retain, nonatomic) UIColor *animationRectangleColor; // @synthesize animationRectangleColor=_animationRectangleColor;
@property(readonly, nonatomic) double animationRectangleCornerRadius; // @synthesize animationRectangleCornerRadius=_animationRectangleCornerRadius;
@property(readonly, nonatomic) double animationRectangleStrokeWidth; // @synthesize animationRectangleStrokeWidth=_animationRectangleStrokeWidth;
@property(retain, nonatomic) NSString *serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) NSString *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(nonatomic) _Bool shouldDismissOnSuccess; // @synthesize shouldDismissOnSuccess=_shouldDismissOnSuccess;
@property(readonly, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
@property(nonatomic) long long geoRegion; // @synthesize geoRegion=_geoRegion;
@property(nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(readonly, nonatomic) float skewAngle; // @synthesize skewAngle=_skewAngle;
@property(readonly, nonatomic) float minPadding; // @synthesize minPadding=_minPadding;
@property(readonly, nonatomic) float minSharpness; // @synthesize minSharpness=_minSharpness;
@property(readonly, nonatomic) float maxBrightness; // @synthesize maxBrightness=_maxBrightness;
@property(readonly, nonatomic) float minBrightness; // @synthesize minBrightness=_minBrightness;
@property(readonly, nonatomic) float minMICRConfidence; // @synthesize minMICRConfidence=_minMICRConfidence;
@property(readonly, nonatomic) float minBackgroundConfidence; // @synthesize minBackgroundConfidence=_minBackgroundConfidence;
@property(readonly, nonatomic) float minContrastConfidence; // @synthesize minContrastConfidence=_minContrastConfidence;
@property(readonly, nonatomic) float minGlareConfidence; // @synthesize minGlareConfidence=_minGlareConfidence;
@property(readonly, nonatomic) float minCornerConfidence; // @synthesize minCornerConfidence=_minCornerConfidence;
@property(readonly, nonatomic) float imageQuality; // @synthesize imageQuality=_imageQuality;
@property(readonly, nonatomic) long long maxCaptures; // @synthesize maxCaptures=_maxCaptures;
@property(readonly, nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) long long minPortraitHorizontalFill; // @synthesize minPortraitHorizontalFill=_minPortraitHorizontalFill;
@property(readonly, nonatomic) long long minLandscapeHorizontalFill; // @synthesize minLandscapeHorizontalFill=_minLandscapeHorizontalFill;
@property(nonatomic) long long orientationMode; // @synthesize orientationMode=_orientationMode;
@property(nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
- (void).cxx_destruct;
- (id)toDictionary;
- (_Bool)isCreditCard;
- (_Bool)isPDF417;
- (_Bool)isCheckFront;
- (_Bool)isCheckBack;
- (_Bool)isCheck;
- (id)toParametersDictionary;
- (void)updateParameters:(id)arg1;
- (void)resetParameters;
- (void)setApplicationVersion:(id)arg1;
- (void)setTerminationDelay:(long long)arg1;
- (void)setMinPortraitHorizontalFill:(long long)arg1;
- (void)setMinLandscapeHorizontalFill:(long long)arg1;
- (void)setTimeout:(long long)arg1;
- (void)setSmartHintUpdatePeriod:(long long)arg1;
- (void)setMinPadding:(float)arg1;
- (void)setMinSharpness:(float)arg1;
- (void)setMaxBrightness:(float)arg1;
- (void)setMinBrightness:(float)arg1;
- (void)setMinMICRConfidence:(float)arg1;
- (void)setMinBackgroundConfidence:(float)arg1;
- (void)setMinContrastConfidence:(float)arg1;
- (void)setMinGlareConfidence:(float)arg1;
- (void)setMinCornerConfidence:(float)arg1;
- (void)setMaxCaptures:(long long)arg1;
- (void)setImageQuality:(float)arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setSkewAngle:(float)arg1;
- (void)setAnimationRectangleStrokeWidth:(double)arg1;
- (void)setAnimationRectangleCornerRadius:(double)arg1;
- (id)init;

@end

