//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASTAvocadoSettingsFlowParameters : NSObject
{
    long long _flowType;
    NSArray *_appDeviceIDs;
    NSArray *_castDeviceInfos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *castDeviceInfos; // @synthesize castDeviceInfos=_castDeviceInfos;
@property(copy, nonatomic) NSArray *appDeviceIDs; // @synthesize appDeviceIDs=_appDeviceIDs;
@property(readonly, nonatomic) long long flowType; // @synthesize flowType=_flowType;
- (id)initWithFlowType:(long long)arg1;

@end

