//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GWAFlowSection;

@interface GWASectionModel : NSObject
{
    _Bool _markedForDeletion;
    id <GWAFlowSection> _section;
    NSMutableArray *_rows;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) id <GWAFlowSection> section; // @synthesize section=_section;

@end

