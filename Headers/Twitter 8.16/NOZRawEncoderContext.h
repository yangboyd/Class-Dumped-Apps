//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ZipUtilities/NOZEncoderContext-Protocol.h>

@class NSString;

@interface NOZRawEncoderContext : NSObject <NOZEncoderContext>
{
    _Bool _encodedDataWasText;
    CDUnknownBlockType _flushCallback;
}

@property(nonatomic) _Bool encodedDataWasText; // @synthesize encodedDataWasText=_encodedDataWasText;
@property(copy, nonatomic) CDUnknownBlockType flushCallback; // @synthesize flushCallback=_flushCallback;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

