//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCTClearcutLogger;

@interface GWAMegalogsLogger : NSObject
{
    CCTClearcutLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CCTClearcutLogger *logger; // @synthesize logger=_logger;
- (long long)logSource;
- (void)log:(id)arg1 inTestingMode:(_Bool)arg2;
- (void)log:(id)arg1;
- (void)log:(id)arg1 forUIElement:(id)arg2;
- (id)initWithObfuscatedGaiaID:(id)arg1;

@end

