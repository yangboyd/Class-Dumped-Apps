//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SDURLRouter : NSObject
{
    NSMutableArray *_entries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (_Bool)routeURL:(id)arg1 userInfo:(id)arg2;
- (_Bool)routeURL:(id)arg1;
- (void)addRoute:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addRoute:(id)arg1 withHandler:(id)arg2;
- (void)addRegexRoute:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addRegexRoute:(id)arg1 withHandler:(id)arg2;
- (id)init;

@end

