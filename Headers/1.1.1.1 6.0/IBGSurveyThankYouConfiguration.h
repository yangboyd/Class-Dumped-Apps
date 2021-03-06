//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBGSurveyThankYouConfiguration : NSObject
{
    _Bool _isAppStoreEnabled;
    NSString *_callToActionText;
    NSString *_message;
    NSString *_title;
}

+ (id)defaultAllConfiguration;
+ (id)defaultDetractorConfiguration;
+ (id)defaultPassiveConfiguration;
+ (id)defaultPromoterConfiguration;
+ (id)appStoreTemplateConfiguration;
+ (id)defaultConfiguration;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(nonatomic) _Bool isAppStoreEnabled; // @synthesize isAppStoreEnabled=_isAppStoreEnabled;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)updateConfigLocalizationForCustomSurveys;
- (void)updateConfigWithOldStringValues;
- (id)initWithThankYouModel:(id)arg1;

@end

