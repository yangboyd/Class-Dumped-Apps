//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAMMSTaskMetrics;

@interface WAMMSUploadFileTaskMetrics : NSObject
{
    WAMMSTaskMetrics *_taskMetrics;
    double _responseWaitTime;
    unsigned long long _bytesTransferred;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesTransferred; // @synthesize bytesTransferred=_bytesTransferred;
@property(nonatomic) double responseWaitTime; // @synthesize responseWaitTime=_responseWaitTime;
@property(retain, nonatomic) WAMMSTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;

@end

