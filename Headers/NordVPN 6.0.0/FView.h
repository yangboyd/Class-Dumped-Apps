//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FEventGenerator, FQuerySpec, FViewCache, FViewProcessor, NSMutableArray;

@interface FView : NSObject
{
    FQuerySpec *_query;
    FViewProcessor *_processor;
    FViewCache *_viewCache;
    NSMutableArray *_eventRegistrations;
    FEventGenerator *_eventGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FEventGenerator *eventGenerator; // @synthesize eventGenerator=_eventGenerator;
@property(retain, nonatomic) NSMutableArray *eventRegistrations; // @synthesize eventRegistrations=_eventRegistrations;
@property(retain, nonatomic) FViewCache *viewCache; // @synthesize viewCache=_viewCache;
@property(retain, nonatomic) FViewProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) FQuerySpec *query; // @synthesize query=_query;
- (id)description;
- (id)generateEventsForChanges:(id)arg1 eventCache:(id)arg2 registration:(id)arg3;
- (id)initialEvents:(id)arg1;
- (id)applyOperation:(id)arg1 writesCache:(id)arg2 serverCache:(id)arg3;
- (id)removeEventRegistration:(id)arg1 cancelError:(id)arg2;
- (void)addEventRegistration:(id)arg1;
- (_Bool)isEmpty;
- (id)completeServerCacheFor:(id)arg1;
- (id)eventCache;
- (id)serverCache;
- (id)initWithQuery:(id)arg1 initialViewCache:(id)arg2;

@end

