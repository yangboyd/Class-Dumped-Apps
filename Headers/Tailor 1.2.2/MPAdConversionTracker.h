//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionTask;

@interface MPAdConversionTracker : NSObject
{
    NSURLSessionTask *_task;
}

+ (id)sharedConversionTracker;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)reportApplicationOpenForApplicationID:(id)arg1;

@end

