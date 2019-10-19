//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCLensesByTypeContainer : NSObject
{
    NSArray *_inputLenses;
    _Bool _forceSponsoredLensBackSection;
    unsigned long long _cameraPosition;
    NSArray *_frontGeoLenses;
    NSArray *_backGeoLenses;
    NSArray *_scheduledLenses;
    NSArray *_scanUnlockedLenses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *scanUnlockedLenses; // @synthesize scanUnlockedLenses=_scanUnlockedLenses;
@property(readonly, nonatomic) NSArray *scheduledLenses; // @synthesize scheduledLenses=_scheduledLenses;
@property(readonly, nonatomic) NSArray *backGeoLenses; // @synthesize backGeoLenses=_backGeoLenses;
@property(readonly, nonatomic) NSArray *frontGeoLenses; // @synthesize frontGeoLenses=_frontGeoLenses;
- (id)initWithInputLenses:(id)arg1 forceSponsoredLensBackSection:(_Bool)arg2 cameraPosition:(unsigned long long)arg3;

@end

