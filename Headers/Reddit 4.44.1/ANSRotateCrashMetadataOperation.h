//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ANSCrashMetadata, ANSMetadata, NSDictionary, NSURL;

@interface ANSRotateCrashMetadataOperation : NSOperation
{
    NSURL *_crashMetadataURL;
    ANSMetadata *_currentMetadata;
    ANSCrashMetadata *_crashMetadata;
    NSDictionary *_currentMetadataDictionary;
}

@property(retain, nonatomic) NSDictionary *currentMetadataDictionary; // @synthesize currentMetadataDictionary=_currentMetadataDictionary;
@property(retain, nonatomic) ANSCrashMetadata *crashMetadata; // @synthesize crashMetadata=_crashMetadata;
@property(retain, nonatomic) ANSMetadata *currentMetadata; // @synthesize currentMetadata=_currentMetadata;
@property(retain, nonatomic) NSURL *crashMetadataURL; // @synthesize crashMetadataURL=_crashMetadataURL;
- (void).cxx_destruct;
- (void)main;
- (id)initWithCrashMetadataURL:(id)arg1 currentMetadata:(id)arg2;

@end

