//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YTClipTrimSpecs : NSObject
{
    NSString *_clipAttachmentCreationKey;
    double _defaultClipLength;
    double _minClipLength;
    double _maxClipLength;
}

@property(readonly, nonatomic) double maxClipLength; // @synthesize maxClipLength=_maxClipLength;
@property(readonly, nonatomic) double minClipLength; // @synthesize minClipLength=_minClipLength;
@property(readonly, nonatomic) double defaultClipLength; // @synthesize defaultClipLength=_defaultClipLength;
@property(readonly, nonatomic) NSString *clipAttachmentCreationKey; // @synthesize clipAttachmentCreationKey=_clipAttachmentCreationKey;
- (void).cxx_destruct;
- (id)initWithClipAttachmentCreationKey:(id)arg1 defaultClipLength:(double)arg2 minClipLength:(double)arg3 maxClipLength:(double)arg4;

@end

