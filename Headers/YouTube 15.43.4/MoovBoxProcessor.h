//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MoovBoxProcessor : NSObject
{
}

+ (void)postProcessSampleToChunkInfo:(id)arg1 error:(id *)arg2;
+ (id)emptySubBoxWithType:(unsigned int)arg1;
+ (id)processTrexBox:(id)arg1 error:(id *)arg2;
+ (id)processMvexBox:(id)arg1 error:(id *)arg2;
+ (id)processStcoBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processStszBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processStscBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processSdtpBox:(id)arg1 error:(id *)arg2;
+ (id)processStssBox:(id)arg1 error:(id *)arg2;
+ (id)processSttsBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processStsdBox:(id)arg1 error:(id *)arg2;
+ (id)processStblBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processDrefBox:(id)arg1 error:(id *)arg2;
+ (id)processDinfBox:(id)arg1 error:(id *)arg2;
+ (id)processSmhdBox:(id)arg1 error:(id *)arg2;
+ (id)processVmhdBox:(id)arg1 error:(id *)arg2;
+ (id)processMinfBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processHdlrBox:(id)arg1 error:(id *)arg2;
+ (id)processMdhdBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processMdiaBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processElstBox:(id)arg1 error:(id *)arg2;
+ (id)processEdtsBox:(id)arg1 error:(id *)arg2;
+ (id)processTkhdBox:(id)arg1 trackInfo:(id)arg2 error:(id *)arg3;
+ (id)processTrakBox:(id)arg1 moovBoxTracksInfo:(id)arg2 error:(id *)arg3;
+ (id)processMvhdBox:(id)arg1 error:(id *)arg2;
+ (id)createEmptyMoovBoxFrom:(id)arg1 tracksInfo:(id *)arg2 error:(id *)arg3;

@end

