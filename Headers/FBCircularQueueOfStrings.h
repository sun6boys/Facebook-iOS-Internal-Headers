//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBCircularQueueOfStrings : NSObject
{
    NSMutableArray *_strings;
    unsigned int _size;
    BOOL _truncated;
    unsigned int _capacity;
}

@property(nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (id)stringWithTruncationPrefix:(id)arg1;
- (void)add:(id)arg1;
- (void)reset;
- (id)init;

@end

