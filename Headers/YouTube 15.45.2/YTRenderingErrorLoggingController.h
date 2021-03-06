//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTHotConfigObserver-Protocol.h>

@class GIMMe, NSString;
@protocol YTEventLogger, YTLastUsedCSNProvider;

@interface YTRenderingErrorLoggingController : NSObject <YTHotConfigObserver>
{
    id <YTEventLogger> _eventLogger;
    id <YTLastUsedCSNProvider> _lastUsedCSNProvider;
    _Bool _canLog;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)logErrorWithClientEvent:(id)arg1;
- (id)dumpViewHierarchy;
- (void)extractCallerInfo:(CDUnknownBlockType)arg1;
- (id)payloadBlockWithError:(int)arg1 model:(id)arg2 requestedIndex:(long long)arg3 availabledItems:(long long)arg4;
- (void)hotConfigDidChange:(id)arg1;
- (void)logSectionOutOfBoundsWithRequestedIndex:(int)arg1 availableSections:(int)arg2;
- (void)logCellOutOfBoundsWithRequestedIndex:(int)arg1 availableCells:(int)arg2;
- (void)logNegativeLayoutSizeWithModel:(id)arg1;
- (void)logEmptyElementWithCellIndex:(int)arg1;
- (void)logEmptyCellWithModel:(id)arg1 cellIndex:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

