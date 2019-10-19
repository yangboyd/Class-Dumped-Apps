//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartEntityDataSource-Protocol.h"
#import "SPTChartEntityLoaderDelegate-Protocol.h"

@class NSString, NSURL, SPTChartEntityLoader;
@protocol SPTChartEntityDataSourceDelegate;

@interface SPTChartEntityLegacyDataSource : NSObject <SPTChartEntityLoaderDelegate, SPTChartEntityDataSource>
{
    id <SPTChartEntityDataSourceDelegate> delegate;
    NSURL *_URL;
    SPTChartEntityLoader *_entityLoader;
}

@property(readonly, nonatomic) SPTChartEntityLoader *entityLoader; // @synthesize entityLoader=_entityLoader;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTChartEntityDataSourceDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)chartEntityLoader:(id)arg1 didEncounterError:(id)arg2;
- (void)chartEntityLoader:(id)arg1 didLoadChart:(id)arg2;
- (void)loadChart;
- (id)initWithURL:(id)arg1 entityLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

