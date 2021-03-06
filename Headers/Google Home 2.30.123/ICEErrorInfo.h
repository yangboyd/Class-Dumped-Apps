//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICEErrorInfo : NSObject
{
    NSString *_componentName;
    NSString *_missingField;
    long long _incorrectImageWidth;
    long long _incorrectImageHeight;
    long long _expectedImageWidth;
    long long _expectedImageHeight;
    NSString *_unsupportedCardType;
    NSString *_ved;
    long long _errorCode;
    NSString *_errorName;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSString *errorName; // @synthesize errorName=_errorName;
@property long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy) NSString *ved; // @synthesize ved=_ved;
@property(copy) NSString *unsupportedCardType; // @synthesize unsupportedCardType=_unsupportedCardType;
@property long long expectedImageHeight; // @synthesize expectedImageHeight=_expectedImageHeight;
@property long long expectedImageWidth; // @synthesize expectedImageWidth=_expectedImageWidth;
@property long long incorrectImageHeight; // @synthesize incorrectImageHeight=_incorrectImageHeight;
@property long long incorrectImageWidth; // @synthesize incorrectImageWidth=_incorrectImageWidth;
@property(copy) NSString *missingField; // @synthesize missingField=_missingField;
@property(copy) NSString *componentName; // @synthesize componentName=_componentName;
- (id)initWithComponentName:(id)arg1 ved:(id)arg2 errorName:(id)arg3;

@end

