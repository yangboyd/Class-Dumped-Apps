//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSCharArray, IOSIntArray;

@interface ComBeetstraJutf7Base64Util : NSObject
{
    IOSCharArray *alphabet_;
    IOSIntArray *inverseAlphabet_;
}

- (void)dealloc;
- (BOOL)getCharWithInt:(int)arg1;
- (_Bool)containsWithChar:(unsigned short)arg1;
- (int)getSextetWithByte:(BOOL)arg1;

@end

