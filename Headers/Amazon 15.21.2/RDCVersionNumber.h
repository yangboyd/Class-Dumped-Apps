//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface RDCVersionNumber : NSObject
{
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_patchVersion;
}

+ (id)createWithAppVersion;
+ (id)createWithSystemVersion;
+ (id)createWithVersionString:(id)arg1;
@property(retain, nonatomic) NSNumber *patchVersion; // @synthesize patchVersion=_patchVersion;
@property(retain, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (void).cxx_destruct;
- (long long)compareTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)compareTo:(id)arg1 withPredicate:(id)arg2;
- (id)description;
- (id)initWithMajorVersion:(long long)arg1 minorVersion:(long long)arg2 patchVersion:(long long)arg3;

@end

