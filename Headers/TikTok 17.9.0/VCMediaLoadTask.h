//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IVCMediaLoadMedia;

@interface VCMediaLoadTask : NSObject
{
    float _loadProgress;
    id <IVCMediaLoadMedia> _media;
    long long _loadByteSize;
    long long _targetByteSize;
    long long _priority;
    long long _status;
}

+ (id)loadTask:(id)arg1 preloadByteSize:(long long)arg2 priority:(long long)arg3;
@property(nonatomic, getter=getState) long long status; // @synthesize status=_status;
@property(nonatomic, getter=getLoadProgress) float loadProgress; // @synthesize loadProgress=_loadProgress;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long targetByteSize; // @synthesize targetByteSize=_targetByteSize;
@property(nonatomic) long long loadByteSize; // @synthesize loadByteSize=_loadByteSize;
@property(retain, nonatomic) id <IVCMediaLoadMedia> media; // @synthesize media=_media;
- (void).cxx_destruct;
- (id)description;
- (id)infoDict;
- (id)itemKey;

@end

