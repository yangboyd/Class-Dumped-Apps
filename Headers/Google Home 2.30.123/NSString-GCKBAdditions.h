//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GCKBAdditions)
+ (id)gckb_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2 excessBytes:(unsigned long long *)arg3;
+ (id)gckb_stringWithUTF8Data:(id)arg1 excessBytes:(unsigned long long *)arg2;
- (id)gckb_stringWithTrailingComponentsRemoved:(id)arg1;
- (id)gckb_SHA1Hash;
- (id)gckb_SHA256Hash;
- (id)gckb_base64DecodedData;
- (_Bool)gckb_matchesGlob:(id)arg1;
- (id)gckb_globToRegex;
- (id)gckb_globToRegexPattern;
- (_Bool)gckb_matchesRegex:(id)arg1;
- (_Bool)gckb_containsRegex:(id)arg1;
- (_Bool)gckb_matchesPattern:(id)arg1;
@end

