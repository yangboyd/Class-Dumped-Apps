//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMAudioWav : NSObject
{
    unsigned int _sampleRate;
    unsigned int _blockAlign;
    double _duration;
    long long _dataOffset;
}

@property(nonatomic) long long dataOffset; // @synthesize dataOffset=_dataOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int blockAlign; // @synthesize blockAlign=_blockAlign;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)initWithHeaders:(CDStruct_257a698c)arg1;
- (id)initWithFilePath:(id)arg1;

@end

