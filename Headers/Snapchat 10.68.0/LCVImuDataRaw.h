//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LCVImuDataRaw : NSObject
{
    NSMutableArray *_imuData;
    NSMutableArray *_videoData;
}

@property(retain, nonatomic) NSMutableArray *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) NSMutableArray *imuData; // @synthesize imuData=_imuData;
- (void).cxx_destruct;
- (id)init;

@end

