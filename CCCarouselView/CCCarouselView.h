//
//  CCCarouselView.h
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-29.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CCCarouselViewDelegate;
@protocol CCCarouselViewDataSource;

@interface CCCarouselView : UIScrollView {
    id <CCCarouselViewDelegate>   delegate_;
	id <CCCarouselViewDataSource> dataSource_;
}
@property (nonatomic, assign) IBOutlet id <CCCarouselViewDelegate>   delegate;
@property (nonatomic, assign) IBOutlet id <CCCarouselViewDataSource> dataSource;
@end
