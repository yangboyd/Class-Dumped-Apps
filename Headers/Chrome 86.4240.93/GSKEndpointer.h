//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSKEndpointer : NSObject
{
    struct NewEndpointer {
        CDUnknownFunctionPointerType *;
        int;
        struct HistoryRing;
        float;
        float;
        float;
        float;
        int;
        long long;
        float;
        unsigned int;
        unsigned int;
        long long;
        struct map<speech::EpStatus, long long, std::__1::less<speech::EpStatus>, std::__1::allocator<std::__1::pair<const speech::EpStatus, long long>>>;
        id;
        float;
        float;
    } *_endpointer;
}

@property(nonatomic) float sensitivity;
- (id)debugString;
- (double)timeStateEntered:(int)arg1;
- (int)computeData:(id)arg1;
- (float)normalizedVolumeLevel;
- (void)reset;
- (void)dealloc;
- (id)initWithSampleRate:(long long)arg1;

@end

