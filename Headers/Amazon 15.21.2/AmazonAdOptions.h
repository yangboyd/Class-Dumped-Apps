//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AmazonAdOptions : NSObject
{
    _Bool _isTestRequest;
    _Bool _usesGeoLocation;
    double _timeout;
    NSMutableDictionary *_otherAdvancedOptions;
}

+ (id)alloc;
+ (id)options;
@property(retain, nonatomic) NSMutableDictionary *otherAdvancedOptions; // @synthesize otherAdvancedOptions=_otherAdvancedOptions;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool usesGeoLocation; // @synthesize usesGeoLocation=_usesGeoLocation;
@property(nonatomic) _Bool isTestRequest; // @synthesize isTestRequest=_isTestRequest;
- (void).cxx_destruct;
- (id)advancedOptions;
- (void)setAdvancedOption:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

