//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class  0,  4,  I;

@interface  M : NSObject
{
    _Bool _active;
     4 *_configManager;
     I *_updateManager;
     0 *_payloadStore;
}

@property _Bool active; // @synthesize active=_active;
@property(retain, nonatomic)  0 *payloadStore; // @synthesize payloadStore=_payloadStore;
@property(retain, nonatomic)  I *updateManager; // @synthesize updateManager=_updateManager;
- (void)setConfigManager:(id)arg1;
- (id)configManager;
- (void).cxx_destruct;
- (void)onApplicationInactive;
- (void)dealloc;
- (_Bool)wK;
- (void)parseResponseHeaders:(id)arg1;
- (id)Ef;
- (long long)Pq;
- (id)xs;
- (_Bool)Fd;
- (id)initWithConfigFile:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic)  4 * yManager; // @synthesize  yManager=_configManager;

@end

