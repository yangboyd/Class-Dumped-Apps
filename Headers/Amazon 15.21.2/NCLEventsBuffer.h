//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NCLNexusEventRecorder, NCLRecorderConfig, NSMutableArray;

@interface NCLEventsBuffer : NSObject
{
    unsigned char _isBufferDepleted;
    NCLRecorderConfig *_recorderConfig;
    NSMutableArray *_bufferQueue;
    NCLNexusEventRecorder *_recorderInstance;
}

+ (id)getWithConfig:(id)arg1;
@property(nonatomic) unsigned char isBufferDepleted; // @synthesize isBufferDepleted=_isBufferDepleted;
@property(retain, nonatomic) NCLNexusEventRecorder *recorderInstance; // @synthesize recorderInstance=_recorderInstance;
@property(retain, nonatomic) NSMutableArray *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(retain, nonatomic) NCLRecorderConfig *recorderConfig; // @synthesize recorderConfig=_recorderConfig;
- (void).cxx_destruct;
- (void)buildRecorderAndReplayEvents;
- (void)record:(id)arg1 withMetadataType:(unsigned int)arg2;
- (void)record:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (id)initWithRecorderConfig:(id)arg1;

@end

