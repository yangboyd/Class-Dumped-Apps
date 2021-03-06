//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SSProductOptionAvailability : NSObject
{
    NSDictionary *_indicators;
    NSMutableArray *_availability;
    long long _nbrSizes;
    long long _nbrColors;
    NSMutableDictionary *_minColorAvailabilityStatusForSize;
    NSMutableDictionary *_minSizeAvailabilityStatusForColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *minSizeAvailabilityStatusForColor; // @synthesize minSizeAvailabilityStatusForColor=_minSizeAvailabilityStatusForColor;
@property(retain, nonatomic) NSMutableDictionary *minColorAvailabilityStatusForSize; // @synthesize minColorAvailabilityStatusForSize=_minColorAvailabilityStatusForSize;
@property(nonatomic) long long nbrColors; // @synthesize nbrColors=_nbrColors;
@property(nonatomic) long long nbrSizes; // @synthesize nbrSizes=_nbrSizes;
@property(retain, nonatomic) NSMutableArray *availability; // @synthesize availability=_availability;
@property(retain, nonatomic) NSDictionary *indicators; // @synthesize indicators=_indicators;
- (unsigned long long)statusForOptionAtIndex:(long long)arg1 isColor:(_Bool)arg2;
- (unsigned long long)statusForSizeIndex:(long long)arg1 AndColorIndex:(long long)arg2;
- (void)parse:(id)arg1;
- (void)parseTomcatAtsData:(id)arg1 sizes:(id)arg2 colors:(id)arg3;
- (void)addAts:(id)arg1 toList:(id)arg2;
- (unsigned long long)statusFromString:(id)arg1;
- (id)initWithAPIAvailabilityData:(id)arg1 andSizes:(id)arg2 andColors:(id)arg3;
- (id)initWithAPIAvailabilityData:(id)arg1 andNbrSizes:(long long)arg2 andNbrColors:(long long)arg3;
- (void)initializeNbrSizes:(long long)arg1 andNbrColors:(long long)arg2;

@end

