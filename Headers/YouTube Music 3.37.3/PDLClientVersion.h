//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDLClientVersion : NSObject
{
    NSString *_version;
    long long _integerVersion;
    unsigned long long _majorWidth;
    unsigned long long _minorWidth;
    unsigned long long _patchWidth;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long patchWidth; // @synthesize patchWidth=_patchWidth;
@property(readonly, nonatomic) unsigned long long minorWidth; // @synthesize minorWidth=_minorWidth;
@property(readonly, nonatomic) unsigned long long majorWidth; // @synthesize majorWidth=_majorWidth;
@property(readonly, nonatomic) long long integerVersion; // @synthesize integerVersion=_integerVersion;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)fullVersion;
- (id)fullName;
- (id)initWithBuilder:(id)arg1;

@end

