//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMSortDescriptor : NSObject
{
    _Bool _ascending;
    NSString *_keyPath;
}

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)reversedSortDescriptor;

@end

