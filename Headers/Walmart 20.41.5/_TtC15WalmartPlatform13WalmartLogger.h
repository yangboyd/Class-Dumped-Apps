//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _TtC15WalmartPlatform13WalmartLogger : NSObject
{
    // Error parsing type: , name: loggingConfiguration
    // Error parsing type: , name: isSetup
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (_Bool)shouldLogWithFlag:(unsigned long long)arg1 customLevel:(unsigned long long)arg2;
- (_Bool)setUpLoggingAndReturnError:(id *)arg1;
@property(nonatomic, readonly) NSURL *logDirectory;
@property(nonatomic) unsigned long long defaultLogLevel;

@end

