//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AWEIMLinkTextUtility : NSObject
{
    NSString *_originText;
    NSArray *_templateArray;
    NSDictionary *_templateActions;
    NSString *_result;
    NSArray *_linkArray;
}

+ (_Bool)hasUnrecognizedActionWithTemplate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *linkArray; // @synthesize linkArray=_linkArray;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSDictionary *templateActions; // @synthesize templateActions=_templateActions;
@property(retain, nonatomic) NSArray *templateArray; // @synthesize templateArray=_templateArray;
@property(copy, nonatomic) NSString *originText; // @synthesize originText=_originText;
- (void)p_matchPattern:(id)arg1 storeInLinkArray:(id)arg2 type:(long long)arg3;
- (void)analyzeForTextMessage;
- (void)analyzeForCompanyMessage;
- (void)analyzeForNoticeMessage;
- (id)initWithOriginCompanyText:(id)arg1 templateActions:(id)arg2;
- (id)initWithOriginText:(id)arg1 templateArray:(id)arg2;

@end

