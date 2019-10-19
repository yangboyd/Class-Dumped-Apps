//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCellViewModel.h"

@class NSArray, NSDictionary, NSString;

@interface SeasonSelectorDividerViewModel : AbstractDisplayPageCellViewModel
{
    unsigned long long _currentSeason;
    unsigned long long _numSeasons;
    NSArray *_seasons;
    NSString *_seasonTitle;
    NSDictionary *_show;
}

@property(copy, nonatomic) NSDictionary *show; // @synthesize show=_show;
@property(copy, nonatomic) NSString *seasonTitle; // @synthesize seasonTitle=_seasonTitle;
@property(copy, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property(nonatomic) unsigned long long numSeasons; // @synthesize numSeasons=_numSeasons;
@property(nonatomic) unsigned long long currentSeason; // @synthesize currentSeason=_currentSeason;
- (void).cxx_destruct;
- (_Bool)shouldCache;
- (void)configureWithDictionary:(id)arg1;

@end

