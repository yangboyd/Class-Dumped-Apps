//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVSelectionBehavior.h"

#import "GAVBehavior-Protocol.h"

@class GAVSeriesSelectionModel, NSString;

@interface GAVSeriesSelectionBehavior : GAVSelectionBehavior <GAVBehavior>
{
    NSString *_name;
    GAVSeriesSelectionModel *_seriesSelectionModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GAVSeriesSelectionModel *seriesSelectionModel; // @synthesize seriesSelectionModel=_seriesSelectionModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)detachFromChart:(id)arg1;
- (void)onResetWithNotification:(id)arg1;
- (void)onSelectSeriesWithNotification:(id)arg1;
- (void)attachToChart:(id)arg1;

@end

