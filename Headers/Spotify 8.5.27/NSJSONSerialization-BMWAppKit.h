//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSJSONSerialization.h>

@interface NSJSONSerialization (BMWAppKit)
+ (id)JSONDictionaryWithString:(id)arg1;
+ (id)stringWithJSONDictionary:(id)arg1;
+ (void)spt_JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
+ (void)spt_dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
+ (id)spt_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@end

