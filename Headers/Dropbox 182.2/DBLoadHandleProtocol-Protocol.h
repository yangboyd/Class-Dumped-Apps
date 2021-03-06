//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBDropboxPath, DBFileLoadError;
@protocol DBLoadHandleStateChangeObserver;

@protocol DBLoadHandleProtocol <NSObject>
@property(readonly, nonatomic) DBFileLoadError *loadError;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) unsigned long long retryCount;
@property(readonly, nonatomic) long long repr;
@property(readonly, nonatomic) DBDropboxPath *path;
- (void)removeStateChangeObserver:(id <DBLoadHandleStateChangeObserver>)arg1;
- (_Bool)addStateChangeObserver:(id <DBLoadHandleStateChangeObserver>)arg1;
- (_Bool)retryWithPriority:(unsigned long long)arg1 newHandlerCompletion:(void (^)(id <DBLoadHandleProtocol>))arg2;
- (_Bool)cancelWithPriority:(unsigned long long)arg1;
- (double)currentProgress;
@end

